# C To-Do Liste

Eine einfache Konsolenanwendung zur Verwaltung von Aufgaben, geschrieben in **ANSI C**.
Das Programm ermöglicht es, Aufgaben direkt im Terminal zu erstellen, anzuzeigen und als erledigt zu markieren.

## Funktionen

* Neue Aufgaben hinzufügen
* Aufgabenliste anzeigen
* Aufgaben als erledigt markieren
* Aufgaben in einer Datei speichern
* Aufgaben beim Programmstart automatisch laden

## Technologien

* ANSI C
* Strukturen (`struct`)
* Dateioperationen (`fopen`, `fprintf`, `fscanf`)
* Modulare Programmstruktur mit `.c` und `.h` Dateien

## Projektstruktur

c-todo-list
│
├── main.c
├── aufgaben.c
├── aufgaben.h
├── aufgaben.txt

## Kompilieren

```bash
gcc main.c aufgaben.c -o todo
```

## Programm starten

```bash
./todo
```

## Beispiel

```
TODO LISTE
1. Aufgabe hinzufügen
2. Aufgaben anzeigen
3. Aufgabe als erledigt markieren
4. Speichern und beenden
```

## Autor

Erstellt als erstes Projekt beim Lernen von ANSI C.
