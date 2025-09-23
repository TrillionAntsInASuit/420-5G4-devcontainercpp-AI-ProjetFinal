#include <iostream>
using namespace std;

void exercice5() {
    int arr1[3] = {1, 2, 3}, arr2[4] = {1, 2, 3, 4};
    bool egal = true;
    string egalText = " sont ";

    cout << "Array 1: {1, 2, 3}" << endl;
    cout << "Array 2: {1, 2, 3, 4}" << endl;
    for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])) + (sizeof(arr2) / sizeof(arr2[0])); i++)
    {
        if (arr1[i] != arr2[i])
        {
            egal = false;
        }
    }

    if (!egal)
    {
        egalText = " ne sont pas ";
    }
    
    cout << "arr1[] et arr2[]" << egalText << "égaux.";
}

void exercice6() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp;

    cout << "arr[] = {1, 2, 3, 4, 5}" << endl;
    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    cout << "Tableau inversé: {";
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
        if (i < 4) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

void exercice8() {
    int arr[] = {10, 11, 7, 8, 2, 9};
    int taille = sizeof(arr) / sizeof(arr[0]);
    int element, index = -1;

    cout << "arr[] = {10, 11, 7, 8, 2, 9}" << endl;
    cout << "Élément à rechercher : ";
    cin >> element;

    for (int i = 0; i < taille; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << element << " trouvé à l'index " << index << " dans arr[]" << endl;
    else
        cout << element << " non trouvé dans arr[]" << endl;
}

void exercice9() {
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
}