#include <iostream>
using namespace std;

int main() {
    string phrase;
    int voyelles = 0;
    int consonnes = 0;
    char listeVoyelles[5] = {'a', 'e', 'i', 'o', 'u'};

    cout << "str = ";
    cin >> phrase;

    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == listeVoyelles[0] || phrase[i] == listeVoyelles[1] || phrase[i] == listeVoyelles[2] ||
             phrase[i] == listeVoyelles[3] || phrase[i] == listeVoyelles[4])
        {
            voyelles++;
        }
        else
        {
            consonnes++;
        }
    }

    cout << "Voyelles: " << voyelles << ", Consonnes: " << consonnes << endl;

    return 0;
}