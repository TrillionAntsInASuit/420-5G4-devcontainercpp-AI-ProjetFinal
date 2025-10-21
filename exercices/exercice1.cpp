#include <iostream>
using namespace std;

int main() {
    int numA;
    int numB;
    int numC;
    char lettreGrand;

    cout << "Entrez A: " << endl;
    cin >> numA;

    cout << "Entrez B: " << endl;
    cin >> numC;

    cout << "Entrez C: " << endl;
    cin >> numC;

    lettreGrand = 'A';
    if (numB > numA)
    {
        lettreGrand = 'B';
    }
    if (numC > lettreGrand)
    {
        lettreGrand = 'C';
    }
    
    cout << lettreGrand << " est le plus grand.";
    return 0;
}