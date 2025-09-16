#include <iostream>
using namespace std;

int main() {
    char caractere;

    cout << "Caractère = ";
    cin >> caractere;

    cout << "Valeur ASCII de 'A' = " << static_cast<int>(caractere);
    return 0;
}