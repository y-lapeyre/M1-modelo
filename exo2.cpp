//2) Écrire un programme qui permet :
//a) de saisir la note d'un étudiant. On doit obliger l'utilisateur à saisir un réel entre 0 et 20.
//b) d'afficher la mention qui correspond à la note saisie :
//Echec si note <10 , Passable si 10<=note<12, Assez Bien si 12<=note<14, Bien si 14<=note<16, Très Bien si note >= 16.

#include <iostream>

int main() {
    double note;
    std::cout << "Entrez la note de l'etudiant : ";
    std::cin >> note;
    if (note < 0) {
        std::cout << "Une note inférieur à 0 n'est pas possible !!!" << std::endl;
    }
    else if (note < 10) {
        std::cout << "Echec" << std::endl;
    } else if (note < 12) {
        std::cout << "Passable" << std::endl;
    } else if (note < 14) {
        std::cout << "Assez Bien" << std::endl;
    } else if (note < 16) {
        std::cout << "Bien" << std::endl;
    } else if (note <= 20){
        std::cout << "Tres Bien" << std::endl;
    } else {
        std::cout << "Pas de note au dessus de 20 !!!" << std::endl;
    }
    return 0;
}