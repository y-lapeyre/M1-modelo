// Écrire un autre programme calculant la valeur moyenne d'un ensemble de nombres entrés au clavier. 
// Utiliser un tableau pour stocker les valeurs et calculer la valeur moyenne dans une fonction.
// Les prototypes sont à déclarer dans un fichier d'entête .h, 
// l'implémentation des fonctions doit être faite dans fichier .cpp et main dans un autre fichier.

#include "exo9.h"
#include <iostream>

int main() {
    const int TAILLE = 5;
    double tab[TAILLE];

    std::cout << "Entrez " << TAILLE << " valeurs : " << std::endl;
    saisirTableau(tab, TAILLE);

    double moyenne = calculerMoyenne(tab, TAILLE);
    std::cout << "La valeur moyenne est : " << moyenne << std::endl;

    return 0;
}