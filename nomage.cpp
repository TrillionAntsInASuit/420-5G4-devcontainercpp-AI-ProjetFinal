#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Entrez votre age: " << endl;
    cin >> age;

    cout << "Entrez votre prénom: " << endl;
  	cin >> name;
  
    cout << "Votre prénom : " << name << " | votre age : " << age;
    return 0;
}