#include <stdio.h>
#include <ctype.h>

void presentazione() {

    printf("Benvenuto nel gioco domanda/risposta di Epicode!\n");
    printf("Il gioco consiste nel rispondere a delle domande.\n");
    printf("Ad ogni risposta corretta guadagni 1 punto!\n");
    printf("Buona fortuna!\n");
}

void nome_giocatore() {

    char nome[50];

    printf("\nInserisci il tuo nome: ");
    scanf("%s", nome);

    printf("\nPerfetto, iniziamo %s!\n", nome);
}

char domanda_1() {

    char scelta;

    printf("\nQual è la capitale d'Italia?\n");
    printf("a) Roma\n");
    printf("b) Milano\n");
    printf("c) Napoli\n");
    printf("d) Torino\n");

    printf("Inserisci la tua scelta: ");
    scanf(" %c", &scelta);

    return tolower(scelta);
}

char domanda_2() {

    char scelta;

    printf("\nQuanto fa 2*2?\n");
    printf("a) 2\n");
    printf("b) 4\n");
    printf("c) 6\n");
    printf("d) 8\n");

    printf("Inserisci la tua scelta: ");
    scanf(" %c", &scelta);

    return tolower(scelta);
}

char domanda_3() {

    char scelta;

    printf("\nQual è il colore del cielo?\n");
    printf("a) Rosso\n");
    printf("b) Verde\n");
    printf("c) Blu\n");
    printf("d) Giallo\n");

    printf("Inserisci la tua scelta: ");
    scanf(" %c", &scelta);

    return tolower(scelta);
}

int main() {

    int punteggio_totale = 0;

    presentazione();

    nome_giocatore();

    if (domanda_1() == 'a') {

        printf("Risposta corretta!\n");
        punteggio_totale++;

    } else {

        printf("Risposta sbagliata!\n");
    }

    if (domanda_2() == 'b') {

        printf("Risposta corretta!\n");
        punteggio_totale++;

    } else {

        printf("Risposta sbagliata!\n");
    }

    if (domanda_3() == 'c') {

        printf("Risposta corretta!\n");
        punteggio_totale++;

    } else {

        printf("Risposta sbagliata!\n");
    }

    printf("\nIl tuo punteggio finale è: %d\n", punteggio_totale);

    if (punteggio_totale == 3) {

        printf("Complimenti, sei un vero genio!\n");

    } else if (punteggio_totale == 2) {

        printf("Ottimo lavoro!\n");

    } else {

        printf("Puoi fare di meglio!\n");
    }

    return 0;
}

