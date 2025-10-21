#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 11, 7, 33, 5, 1};
    int taille = sizeof(arr) / sizeof(arr[0]);
    int k;
    int arrDroite[k];
    int arrGauche[taille - k];

    cout << "arr[] = {10, 11, 7, 33, 5, 1}" << endl;
    cout << "k = ";
    cin >> k;

    for (int i = 0; i < k; i++) {
        arrDroite[i] = arr[taille - k + i];
    }

    for (int i = 0; i < taille - k; i++) {
        arrGauche[i] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = arrDroite[i];
    }
    for (int i = 0; i < taille - k; i++) {
        arr[i + k] = arrGauche[i];
    }

    cout << "Tableau après rotation : {";
    for (int i = 0; i < taille; i++) {
        cout << arr[i];
        if (i < taille - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}