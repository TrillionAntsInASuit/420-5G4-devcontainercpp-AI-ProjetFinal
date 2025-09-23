#include <iostream>
using namespace std;

int main() {
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

    return 0;
}