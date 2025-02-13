// Écrire un autre programme calculant la valeur moyenne d'un ensemble de nombres entrés au clavier. 
// Utiliser un tableau pour stocker les valeurs et calculer la valeur moyenne dans une fonction.
// Les prototypes sont à déclarer dans un fichier d'entête .h, 
// l'implémentation des fonctions doit être faite dans fichier .cpp et main dans un autre fichier.

#include "exo9.h"
#include <iostream>

// On compile via  g++ main.cpp exo9.cpp -o exo9.exe

void saisirTableau(double tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez la valeur " << i + 1 << " : ";
        std::cin >> tab[i];
    }
}

double calculerMoyenne(double tab[], int taille) {
    double somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }
    return somme / taille;
}