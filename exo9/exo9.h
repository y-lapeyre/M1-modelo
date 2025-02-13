// Écrire un autre programme calculant la valeur moyenne d'un ensemble de nombres entrés au clavier. 
// Utiliser un tableau pour stocker les valeurs et calculer la valeur moyenne dans une fonction.
// Les prototypes sont à déclarer dans un fichier d'entête .h, 
// l'implémentation des fonctions doit être faite dans fichier .cpp et main dans un autre fichier.

#ifndef MOYENNE_H
#define MOYENNE_H

void saisirTableau(double tab[], int taille);
double calculerMoyenne(double tab[], int taille);

#endif  // MOYENNE_H