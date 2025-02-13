//1) Faire un petit programme de conversion Euro - Dollar. 

#include <iostream>


int main() {
    double euro, dollar;
    std::cout << "Entrez une valeur en euros : ";
    std::cin >> euro;
    dollar = euro * 1.1;
    std::cout << euro << " euros = " << dollar << " dollars." << std::endl;
    return 0;
}