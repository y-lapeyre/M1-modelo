//6) Écrire un programme qui comporte une fonction qui permet de chercher tous les nombres premiers 
//entre 2 entiers a et b. Dans main demander à l'utilisateur les valeurs de a et b et calculer ensuite les nombres premiers.

#include <iostream>
#include <cmath>
using namespace std;

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