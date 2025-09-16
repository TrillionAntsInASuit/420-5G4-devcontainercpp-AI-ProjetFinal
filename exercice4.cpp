#include <iostream>
using namespace std;

int main() {
    string num, textPalindrome = " est";
    bool estPlalindrome = true;

    cout << "Nombre à vérifier = ";
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] != num[num.length() - i - 1])
        {
            estPlalindrome = false;
        }
    }

    if (!estPlalindrome)
    {
        textPalindrome = " n'est pas";
    }
    

    cout << num << textPalindrome << " un nombre palindrome.";

    return 0;
}