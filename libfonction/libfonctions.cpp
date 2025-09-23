#include <iostream>
using namespace std;

// Definition d'une méthode
void hello() {
    cout << "Bonjour" << endl;
}

// Definition d'une fonction
int square(int x) {
    return x * x;
}

void change(int &a) {
    a = 22;
    cout << "Adresse de a : " << &a << endl;
}