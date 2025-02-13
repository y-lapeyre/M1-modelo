//11) Faire un programme pour :
//générer aléatoirement des valeurs réelles, et les stocker dans un vecteur (type vector) les écrire dans un fichier,
//relire ces valeurs dans le fichier,
//faire quelques opérations simples (valeur min, valeur max, moyenne)
//réordonner les valeurs dans l'ordre croissant à l'intérieur du tableau.

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <random>

int main() {
    srand(time(0)); // pour ne pas avoir la même séquence de nombres pseudo-aléatoires à chaque exécution
    int taille;
    double minval, maxval;
    std::cout << "Combien de valeurs ? " << taille << " : ";
    std::cin >> taille;
    std::cout << "Valeur mnimale possible ? " << minval << " : ";
    std::cin >> minval;
    std::cout << "Valeur maximale possible ? " << maxval << " : ";
    std::cin >> maxval;

    std::vector<double> valeurs(taille);
    for (int i = 0; i < taille; i++) {
        valeurs[i] = minval + (double)rand() / RAND_MAX * (maxval - minval);
    }

    // Écrire les valeurs dans un fichier
    std::ofstream fichier("valeurs.txt");
    if (fichier.is_open()) {
        for (int i = 0; i < taille; i++) {
            fichier << valeurs[i] << " ";
        }
        fichier.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier" << std::endl;
    }

    // Relire les valeurs dans le fichier
    std::ifstream fichierLecture("valeurs.txt");
    if (fichierLecture.is_open()) {
        std::vector<double> valeursLues(taille);
        for (int i = 0; i < taille; i++) {
            fichierLecture >> valeursLues[i];
        }
        fichierLecture.close();

        // Faire quelques opérations simples
        double min = *std::min_element(valeursLues.begin(), valeursLues.end());
        double max = *std::max_element(valeursLues.begin(), valeursLues.end());
        double moyenne = 0.0;
        for (int i = 0; i < taille; i++) {
            moyenne += valeursLues[i];
        }
        moyenne /= taille;

        std::cout << "Valeur min : " << min << std::endl;
        std::cout << "Valeur max : " << max << std::endl;
        std::cout << "Moyenne : " << moyenne << std::endl;

        // Réordonner les valeurs dans l'ordre croissant
        std::sort(valeursLues.begin(), valeursLues.end());
        std::cout << "Valeurs réordonnées : ";
        for (int i = 0; i < taille; i++) {
            std::cout << valeursLues[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cerr << "Impossible d'ouvrir le fichier" << std::endl;
    }

    return 0;
}