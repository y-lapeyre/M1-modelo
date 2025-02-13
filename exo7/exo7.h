//7) Même exercice qu’en 6 mais en déclarant les prototypes dans un fichier d'entête .h et l'implémentation dans un fichier .cpp.
#include <cmath>
bool estPremier(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}