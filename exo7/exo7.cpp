//7) Même exercice qu’en 6 mais en déclarant les prototypes dans un fichier d'entête .h et l'implémentation dans un fichier .cpp.

// pour compiler, on entre simplement g++ exo7.cpp -o exo7.exe
// la commande include "exo7.h" va dire au compilateur copier le fichier exo7.h et dans le fichier .cpp
#include <iostream>
#include "exo7.h"
using namespace std;

int main() {
    int a, b;
    cout << "Entrez les valeurs de a et b : ";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (estPremier(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}