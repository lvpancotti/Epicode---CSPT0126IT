#include <stdio.h>
#include <ctype.h>

void presentazione () {
    printf ("Benvenuto nel gioco domanda/risposta di Epicode!");
    printf ("\n Il gioco consiste a rispondere a delle domande, ad ogni risposta corretta ti aggiudichi 1 punto!");

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
    return scelta;

}

char giocatore () {
    char nome [50];
    int punteggio = 0;
    printf ("\n Inserisci il tuo nome: ");
    scanf ("%s", nome);
    printf ("\n Ciao %s! Iniziamo il gioco!", nome);
    
        printf ("Qual è la capitale d'Italia? \n");
        printf ("a) Roma \n");
        printf ("b) Milano \n");
        printf ("c) Napoli \n");
        printf ("d) Torino \n");
        printf ("Inserisci la tua scelta: ");
        char scelta;
        scanf (" %c", &scelta);
        if (tolower(scelta) == 'a') {
            printf ("Risposta corretta! Hai guadagnato 1 punto.");
            punteggio++;
        } else {
            printf ("Risposta sbagliata! La risposta corretta è a) Roma.");
        }

        printf ("\n Quanto fa 2*2? \n");
        printf ("a) 2 \n");
        printf ("b) 4 \n");
        printf ("c) 6 \n");
        printf ("d) 8 \n");
        printf ("Inserisci la tua scelta: ");
        scanf (" %c", &scelta);
        if (tolower(scelta) == 'b') {
            printf ("Risposta corretta! Hai guadagnato 1 punto.");
            punteggio++;
        } else {
            printf ("Risposta sbagliata! La risposta corretta è b) 4.");
        }

        printf ("\n Qual è il colore del cielo? \n");
        printf ("a) Rosso \n");
        printf ("b) Verde \n");
        printf ("c) Blu \n");
        printf ("d) Giallo \n");
        printf ("Inserisci la tua scelta: ");
        scanf (" %c", &scelta);
        if (tolower(scelta) == 'c') {
            printf ("Risposta corretta! Hai guadagnato 1 punto.");
            punteggio++;
        } else {
            printf ("Risposta sbagliata! La risposta corretta è c) Blu.");
        }   


    printf ("\n Il tuo punteggio è: %d", punteggio);   

}  

int main () {
    presentazione();
    
    switch (toupper(menu_scelta())) {
        case 'A': 
            giocare();
            break;
        case 'B':
            arrivederci();
            break;

        default:
            printf ("Scelta non valida! Riprova.");
    }

    while (toupper(menu_scelta()) != 'B') {
        switch (toupper(menu_scelta())) {
            case 'A': 
                giocare();
                break;
            case 'B':
                arrivederci();
                break;

            default:
                printf ("Scelta non valida! Riprova.");
        }
    }
}

int main () {
    char scelta;
    int punteggio_totale = 0;

    presentazione ();

    do {
        scelta = menu_scelta();

        switch (toupper(scelta)) {
            case 'A': 
                punteggio_totale += giocatore();
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