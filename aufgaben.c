#include <stdio.h>
#include <string.h>
#include "aufgaben.h"

void aufgabeHinzufuegen(Aufgabe aufgaben[], int *anzahl) {
    if (*anzahl >= MAX_AUFGABEN) {
        printf("Die Aufgabenliste ist voll.\n");
        return;
    }

    printf("Neue Aufgabe eingeben: ");
    getchar();
    fgets(aufgaben[*anzahl].titel, MAX_LAENGE, stdin);

    aufgaben[*anzahl].titel[strcspn(aufgaben[*anzahl].titel, "\n")] = 0;
    aufgaben[*anzahl].erledigt = 0;

    (*anzahl)++;
}

void aufgabenAnzeigen(Aufgabe aufgaben[], int anzahl) {
    printf("\nAufgabenliste:\n");

    for (int i = 0; i < anzahl; i++) {
        printf("%d. [%c] %s\n",
                i + 1,
                aufgaben[i].erledigt ? 'X' : ' ',
                aufgaben[i].titel);
    }
}

void aufgabeErledigen(Aufgabe aufgaben[], int anzahl) {
    int nummer;

    printf("Nummer der Aufgabe: ");
    scanf("%d", &nummer);

    if (nummer < 1 || nummer > anzahl) {
        printf("Ungültige Aufgabe.\n");
        return;
    }

    aufgaben[nummer - 1].erledigt = 1;
}

void aufgabenSpeichern(Aufgabe aufgaben[], int anzahl) {
    FILE *datei = fopen("aufgaben.txt", "w");

    if (!datei) {
        printf("Fehler beim Speichern der Datei.\n");
        return;
    }

    for (int i = 0; i < anzahl; i++) {
        fprintf(datei, "%d|%s\n",
                aufgaben[i].erledigt,
                aufgaben[i].titel);
    }

    fclose(datei);
}

void aufgabenLaden(Aufgabe aufgaben[], int *anzahl) {
    FILE *datei = fopen("aufgaben.txt", "r");

    if (!datei) return;

    while (fscanf(datei, "%d|%[^\n]\n",
            &aufgaben[*anzahl].erledigt,
            aufgaben[*anzahl].titel) == 2) {
        (*anzahl)++;
    }

    fclose(datei);
}