#include <iostream>
#include "libfonctions.h"
using namespace std;

int main() {

    int x = 5;
    // Appel de la méthode
    hello();

    // Appel de la fonction
    int result = square(5);
    cout << "Le carré de 5 est : " << result << endl;

    cout << "Adresse de x : " << &x << endl;
    change(x);

    cout << "Après changement : " << x << endl;

    return 0;
}