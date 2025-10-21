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

int main() {
    Noeud *n1, *n2, *n3;
    n1 = new Noeud(10);
    n2 = new Noeud(20);
    n3 = new Noeud(30);

    n1->suivant = n2;
    n2->suivant = n3;
    n3->suivant = nullptr;

    cout << "Liste: ";
    Noeud *nCourant = n1;

    while (nCourant != nullptr) {
        cout << nCourant->valeur << " -> ";
        nCourant = nCourant->suivant;
    }

    cout << "NULL" << endl;

    return 0;
}