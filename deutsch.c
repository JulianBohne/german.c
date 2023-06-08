#include <stdio.h>
#include <stdlib.h>

#include "deutsch.h"

Definiere eine Funktion mit dem Rueckgabetyp Ganzzahl und Namen Startfunktion welche folgende Argumente uebergeben bekommt 
(Eine Ganzzahl mit dem Namen Argumentanzahl, ein Zeichenkettenfeld mit dem Namen Argumentwerte) 
{
    Falls die Argumentanzahl weniger als 2 ist dann {
        Drucke den Fehler "Bitte uebergebe wie folgt eine Ganzzahl: programm <Ganzzahl>" aus;
        Gebe 1 zurueck;
    }
    
    Deklariere eine Ganzzahl mit dem Namen Eingabezahl und setze diese auf den Rueckgabewert von Zeichenkette_zu_Ganzzahl(Argumentwerte[1]);

    Falls die Variable Eingabezahl gleich 0 ist dann {
        Drucke die Information "Das ist nicht sonderlich interessant." aus;
    } Ansonsten {
        Was ist in Eingabezahl enthalten 
        {
            Wenn es 5 ist:
                Drucke die Information "Welch eine gute Wahl!" aus;
                Verlasse diesen Bereich;

            Wenn es 666 ist:
                Drucke die Information "Du dienst wohl dem Teufel!" aus;
                Verlasse diesen Bereich;
            
            In allen anderen Faellen:
                Drucke die Information "Ich bin an deinen Spielereien nicht interessiert." aus;
                Verlasse diesen Bereich;
        }
    }

    Gebe 0 zurueck;
}

