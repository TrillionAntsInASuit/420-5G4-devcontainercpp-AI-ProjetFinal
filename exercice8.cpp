#include <iostream>
using namespace std;

int main() {
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

    return 0;
}