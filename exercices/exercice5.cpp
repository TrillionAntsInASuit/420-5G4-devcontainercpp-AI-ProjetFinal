#include <iostream>
using namespace std;

int main() {
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
    
    return 0;
}