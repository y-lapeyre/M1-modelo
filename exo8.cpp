#include <iostream>
#include <cmath>

double simpson(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / (n + 1);
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 4 * f(x);
        }
    }
    return sum * h / 3;
}

double sinus(double x) {
    return std::sin(x);
}

int main() {
    double a, b, n;
    std::cout << "Entrez la borne inférieure a : ";
    std::cin >> a;
    std::cout << "Entrez la borne supérieure b : ";
    std::cin >> b;
    std::cout << "Entrez le nombre de sous-intervalles n : ";
    std::cin >> n;

    double integral = simpson(sinus, a, b, n);
    std::cout << "L'intégrale de sinus entre " << a << " et " << b << " est approximativement égale à " << integral << std::endl;

    return 0;
}