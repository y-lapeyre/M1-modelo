//5) Écrire un programme qui permet de chercher tous les nombres premiers inférieurs à 1000.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 2; i < 1000; i++) {
        bool premier = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                premier = false;
                break;
            }
        }
        if (premier) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}