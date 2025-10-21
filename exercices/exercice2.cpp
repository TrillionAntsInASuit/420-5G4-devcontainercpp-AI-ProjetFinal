#include <iostream>
using namespace std;

int main() {
    int choix;
    int temp;
    int tempCel;
    int tempFar;

    cout << "=== Convertisseur de température ===" << endl;
    cout << "Choisissez une option :" << endl;
    cout << "1. Celsius vers Fahrenheit" << endl;
    cout << "2. Fahrenheit vers Celsius" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    if (choix == 1)
    {
        cout << "Entrez la température en Celsius : ";
        cin >> temp;
        tempFar = temp * 1.8 + 32;
        cout << temp << "*C = " << tempFar << "*F";

    } else if (choix == 2)
    {
        cout << "Entrez la température en Fahrenheit : ";
        cin >> temp;
        tempCel = (temp - 32) / 1.8;
        cout << temp << "*F = " << tempCel << "*C";
    }
    
    
    return 0;
}