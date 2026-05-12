#include <stdio.h>
#include <ctype.h>

void presentazione () {

    printf ("Benvenuto nel gioco domanda/risposta di Epicode!");
    printf ("\n Il gioco consiste nel rispondere a delle domande, ad ogni risposta corretta ti aggiudichi 1 punto!");
        printf ("\n Buona fortuna! ;)");
            scanf ("\n Premi invio per continuare...");
}
void nome_giocatore () {
    char nome [50];
    printf ("\n Inserisci il tuo nome: ");
    scanf ("%s", nome);
        printf ("\n Perfetto, iniziamo %s!");
}


char menu_scelta () {
    char scelta;
    printf ("\n Qual è la capitale d'Italia? \n");
    printf ("a) Roma \n");
    printf ("b) Milano \n");
    printf ("c) Napoli \n");
    printf ("d) Torino \n");
    printf ("Inserisci la tua scelta: ");
    scanf (" %c", &scelta);

        if (tolower(scelta) == 'a') {
            printf ("Risposta corretta! Hai guadagnato 1 punto.");
        } else {
            printf ("Risposta sbagliata! La risposta corretta è a) Roma.");
        }
    return scelta;

}
void ben_fatto () {

    printf ("\n Ben fatto! Hai risposto correttamente alla domanda precedente, continua così!");
        printf ("\n Passiamo all prossima, concentrati!, nome_giocatore());");
            scanf ("\n Premi invio per continuare...");
}

char domanda_1 () {

     printf ("Qual è la capitale d'Italia? \n");
        printf ("a) Roma \n");
        printf ("b) Milano \n");
        printf ("c) Napoli \n");
        printf ("d) Torino \n");
        printf ("Inserisci la tua scelta: ");

        char scelta;
        scanf ("%c", &scelta);
            if (tolower(scelta) == 'a') {
                printf ("Risposta corretta! Hai guadagnato 1 punto.");
            int punteggio = 1;
            punteggio++;

        }   else {
                printf ("Risposta sbagliata! La risposta corretta è a) Roma.");
        }

    void ben_fatto (); {
        printf ("\n Fantastico, le sai proprio tutte. Ma ora si complicano le cose.. eheh! Concentrati! %s");
            scanf ("\n Premi invio per continuare...");
    
        }

char domanda_2 (); {

        printf ("\n Quanto fa 2*2? \n");
        printf ("a) 2 \n");
        printf ("b) 4 \n");
        printf ("c) 6 \n");
        printf ("d) 8 \n");
        printf ("Inserisci la tua scelta: ");
        scanf (" %c", &scelta);
        if (tolower(scelta) == 'b') {
            printf ("Risposta corretta! Hai guadagnato 1 punto.");
            
        }   else {
                printf ("Risposta sbagliata! La risposta corretta è b) 4.");
        }

char domanda_3 (); {

        printf ("\n Qual è il colore del cielo? \n");
        printf ("a) Rosso \n");
        printf ("b) Verde \n");
        printf ("c) Blu \n");
        printf ("d) Giallo \n");
        printf ("Inserisci la tua scelta: ");
        scanf (" %c", &scelta);
             if (tolower(scelta) == 'c') {
                printf ("Risposta corretta! Hai guadagnato 1 punto.");
        }       else {
                    printf ("Risposta sbagliata! La risposta corretta è c) Blu.");
        }   


    printf ("\n Il tuo punteggio è: %d");


}  

char finale (); {

}

    printf ("\n Il gioco è finito! Il tuo punteggio finale è: %d");
        int punteggio_totale = 0;
        if (punteggio_totale == 3) {
            printf ("\n Complimenti, sei un vero genio!");
        }   else if (punteggio_totale == 2) {
            
}
int main (); {
    
   void presentazione();
    
    switch (toupper(menu_scelta())) {
        case 'A': 
            nome_giocatore();
            break;
        case 'B':
            printf ("\n Arrivederci!");
            break;

        default:
            printf ("Scelta non valida! Riprova.");
    }

    while (toupper(menu_scelta()) != 'B') {
        switch (toupper(menu_scelta())) {
            case 'A': 
                nome_giocatore();
                break;
            case 'B':
                printf ("\n Arrivederci!");
                break;
                    default:
                        printf ("Scelta non valida! Riprova.");
        }
        return 0;

}


int main (); {

    char scelta;
    int punteggio_totale = 0;

    presentazione ();

    do {
        scelta = menu_scelta();

        switch (toupper(scelta)) {
            case 'A': 
                void punteggio_totale();
                printf ("\n Il tuo punteggio totale è: %d", punteggio_totale);
                    break;
            case 'B':
                printf ("\n Il tuo punteggio finale è: %d", punteggio_totale);
                printf ("\n Arrivederci!");
                    break;

            default:
                printf ("Scelta non valida! Riprova.");
        }
    } while (toupper(scelta) != 'B');  

    return 0;
    }


}

int punteggio ();

        punteggio_totale = punteggio_totale + 1; 
            printf ("\n Il tuo punteggio è: %d", punteggio);

    if (tolower(menu_scelta()) == 'a') {
        punteggio_totale++;
            int risposta;
            if (risposta == 1) {
                int punteggio = 0;
                punteggio++;
    }

    return punteggio_totale;

}

}

