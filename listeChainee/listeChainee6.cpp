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

int compterElements(Noeud* tete) {
    int count = 0;
    Noeud* courant = tete;
    while (courant != nullptr) {
        count++;
        courant = courant->suivant;
    }
    return count;
}
void viderListe(Noeud*& tete) {
    Noeud* courant = tete;
    while (courant != nullptr) {
        Noeud* temp = courant;
        courant = courant->suivant;
        delete temp;
    }
    tete = nullptr;
}

void inverserListe(Noeud*& tete) {
    Noeud* precedent = nullptr;
    Noeud* courant = tete;
    Noeud* suivant = nullptr;
    while (courant != nullptr) {
        suivant = courant->suivant;
        courant->suivant = precedent;
        precedent = courant;
        courant = suivant;
    }
    tete = precedent;
}

void afficherListe(Noeud* tete) {
    if (tete == nullptr) {
        cout << "(liste vide)" << endl;
        return;
    }
    Noeud* courant = tete;
    while (courant != nullptr) {
        cout << courant->valeur << " -> ";
        courant = courant->suivant;
    }
    cout << "NULL";
}

int main() {
    Noeud *n1, *n2, *n3, *n4;
    n1 = new Noeud(10);
    n2 = new Noeud(20);
    n3 = new Noeud(30);
    n4 = new Noeud(40);

    n1->suivant = n2;
    n2->suivant = n3;
    n3->suivant = n4;
    n4->suivant = nullptr;

    cout << "Liste: ";
    afficherListe(n1);
    cout << endl;

    cout << "Nombre d'éléments: " << compterElements(n1) << endl;

    cout << "Liste inversée: ";
    inverserListe(n1);
    afficherListe(n1);
    cout << endl;

    cout << "Liste vidée: ";
    viderListe(n1);
    afficherListe(n1);

    return 0;
}