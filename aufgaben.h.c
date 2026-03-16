#ifndef AUFGABEN_H
#define AUFGABEN_H

#define MAX_AUFGABEN 100
        #define MAX_LAENGE 100

typedef struct {
char titel[MAX_LAENGE];
int erledigt;
} Aufgabe;

void aufgabeHinzufuegen(Aufgabe aufgaben[], int *anzahl);
void aufgabenAnzeigen(Aufgabe aufgaben[], int anzahl);
void aufgabeErledigen(Aufgabe aufgaben[], int anzahl);
void aufgabenSpeichern(Aufgabe aufgaben[], int anzahl);
void aufgabenLaden(Aufgabe aufgaben[], int *anzahl);

#endif