#include <iostream>
using namespace std;

int main() {
    // Dies ist ein Kommentar
    { cout << "Hallo Welt" << endl; }

    { system("pause"); }
    { return 0; }



    // Ohne system("pause"); wird das Terminal direkt geschlossen und wartet nicht auf eine Usereingabe

    // Ohne return 0 wird automatisch 0 returnt

    // Wenn der Rumpf von Main leer ist wird das Programm trotzdem kompiliert und ausgeführt, das Terminal schließt sich automatisch ohne Ausgabe

    // Das Semikolon beendet den Ausdruck und deshalb kann ein Ausdruck über mehrere Zeilen verteilt sein
    
    // Das Semikolon wegzulassen funkt nöscht. (expected ';' before '}' token)

    // Mehrere Anweisungen in einer Zeile zu speichern ist in Ordnung, da das Semikolon die beiden Ausdrücke voneinander trennt.

    // Mehrere Rümpfe funktionieren. Varaiblen können dann zum Beispiel doppelt deklariert werden, da die Variable nach dem Rumpf wieder gelöscht wird von der Variablentabelle.
}