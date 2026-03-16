#include <stdio.h>
#include "aufgaben.h"

int main() {
    Aufgabe aufgaben[MAX_AUFGABEN];
    int anzahl = 0;
    int auswahl;

    aufgabenLaden(aufgaben, &anzahl);

    while (1) {
        printf("\nTODO LISTE\n");
        printf("1. Aufgabe hinzufügen\n");
        printf("2. Aufgaben anzeigen\n");
        printf("3. Aufgabe als erledigt markieren\n");
        printf("4. Speichern und beenden\n");

        printf("Auswahl: ");
        scanf("%d", &auswahl);

        switch (auswahl) {
            case 1:
                aufgabeHinzufuegen(aufgaben, &anzahl);
                break;

            case 2:
                aufgabenAnzeigen(aufgaben, anzahl);
                break;

            case 3:
                aufgabeErledigen(aufgaben, anzahl);
                break;

            case 4:
                aufgabenSpeichern(aufgaben, anzahl);
                printf("Aufgaben gespeichert. Programm beendet.\n");
                return 0;

            default:
                printf("Ungültige Auswahl.\n");
        }
    }
}