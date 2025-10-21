#include <iostream>
using namespace std;

class Noeud {
	public:
	    int valeur;
	    Noeud* suivant;
	    
	    // Constructeur pour faciliter la création
	    Noeud(int val) : valeur(val), suivant(nullptr) {}
	    
	    // Destructeur (optionnel, mais bonne pratique)
	    ~Noeud() {}
};

bool rechercher(Noeud* tete, int valeur) {
    Noeud* courant = tete;
    while (courant != nullptr) {
        if (courant->valeur == valeur) {
            return true;
        }
        courant = courant->suivant;
    }
    return false;
}

int obtenirPosition(Noeud* tete, int valeur) {
    Noeud* courant = tete;
    int position = 0;
    while (courant != nullptr) {
        if (courant->valeur == valeur) {
            return position;
        }
        courant = courant->suivant;
        position++;
    }
    return -1;
}

int main() {
    Noeud *n1, *n2, *n3, *n4, *n5;
    n1 = new Noeud(10);
    n2 = new Noeud(20);
    n3 = new Noeud(30);
    n4 = new Noeud(40);
    n5 = new Noeud(50);

    n1->suivant = n2;
    n2->suivant = n3;
    n3->suivant = n4;
    n4->suivant = n5;
    n5->suivant = nullptr;

    cout << "Recherche de 30: " << (rechercher(n1, 30) ? "Trouvé a la position " + 
        to_string(obtenirPosition(n1, 30)) : "Non trouvé (position -1)") << endl;
    cout << "Recherche de 60: " << (rechercher(n1, 60) ? "Trouvé a la position " + 
        to_string(obtenirPosition(n1, 60)) : "Non trouvé (position -1)") << endl;
    cout << "Recherche de 10: " << (rechercher(n1, 10) ? "Trouvé a la position " + 
        to_string(obtenirPosition(n1, 10)) : "Non trouvé (position -1)") << endl;

    return 0;
}