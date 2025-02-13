// 10) Écrire un programme pour :
// saisir des valeurs au clavier, les stocker dans un tableau
// ne retenir que les valeurs positives et les copier dans un deuxième tableau qui sera alloué
// dynamiquement.

#include <iostream>
#include <vector>

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    double tableau[taille];

    std::cout << "Entrez les valeurs du tableau : " << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez la valeur " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    std::vector<double> tableauPositif;

    for (int i = 0; i < taille; i++) {
        if (tableau[i] > 0) {
            tableauPositif.push_back(tableau[i]);
        }
    }

    std::cout << "Tableau des valeurs positives : " << std::endl;
    for (int i = 0; i < tableauPositif.size(); i++) {
        std::cout << tableauPositif[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}