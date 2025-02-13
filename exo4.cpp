//4) Écrire un programme qui permet de calculer la valeur de p en utilisant la série : ∞ n
//=2∑n=1Sn où Sn1=2n1Sn et S1=1

#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    int n;
    double pi;
    cout << "Entrez la valeur de n (on calculera la somme jusqu'au n-ieme terme): ";
    cin >> n;
    double Si = 1;
    pi = 1;
    for (int i = 1; i <= n; i++) {
        Si = (double(i) / double((2*i)+1)) * Si;
        pi += Si;
    }
    cout << "La valeur de p est : " << pi * 2 << endl;
    return 0;
}