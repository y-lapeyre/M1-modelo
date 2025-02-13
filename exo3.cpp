//3) Écrire un programme qui permet de chercher, par dichotomie, le zéro de la fonction f(x) = x+ex-2 . 
//Il faudra donc trouver la valeur de x0 telle que f(x0) = 0. On cherchera le zéro entre 2 valeurs a et 
//b saisies par l'utilisateur. La valeur du zéro sera calculée avec une précision epsi saisie par l'utilisateur.

#include <iostream>
#include <cmath>
#include <iomanip>

double f(double x) {
    return x + exp(x) - 2;
}

int main() {
    double a, b, epsi;
    std::cout << "Entrez la valeur de a : ";
    std::cin >> a;
    std::cout << "Entrez la valeur de b : ";
    std::cin >> b;
    std::cout << "Entrez la valeur de epsi : ";
    std::cin >> epsi;

    int N = 200; // Nombre maximum d'itérations que l'on va autoriser

    if (a > b) {
        std::swap(a, b);
    }

    int c = 0; // Compteur d'itérations
    double x0 = (a + b) / 2;
    while (abs(f(x0)) > epsi && c < N) {
        if (f(x0) > 0) {
            b = x0;
        } else {
            a = x0;
        }
        x0 = (a + b) / 2;
        c++; // On incrémente le compteur
    }

    if (c == N) {
        std::cout << "Le zéro de f(x) n'a pas pu être trouvé avec cette précision après " 
        << N << 
        " itérations. Peut-être que le 0 ne se trouve pas dans cet intervalle, ou que la précision demandée est trop élevée."
        << std::endl;
        return 1;
    }
    std::cout << "Le zéro de f(x) est approximativement " << std::setprecision(10) << x0 << std::endl;
    return 0;
}