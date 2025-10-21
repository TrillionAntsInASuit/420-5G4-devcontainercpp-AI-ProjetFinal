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

bool supprimerElement(Noeud*& tete, int valeur) {
    bool trouve = false;

    if (tete != nullptr) {
        if (tete->valeur == valeur) {
            Noeud* temp = tete;
            tete = tete->suivant;
            delete temp;
            trouve = true;
        } else {
            Noeud* courant = tete;
            while (courant->suivant != nullptr && courant->suivant->valeur != valeur) {
                courant = courant->suivant;
            }

            if (courant->suivant != nullptr) {
                Noeud* temp = courant->suivant;
                courant->suivant = courant->suivant->suivant;
                delete temp;
                trouve = true;
            }
        }
    }

    return trouve;
}


void afficherListe(Noeud* tete) {
    if (tete == nullptr) {
        cout << "Liste vide" << endl;
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

    string n1Supprime = (supprimerElement(n1, 30) ? "(Réussie)" : "(Échec - élément non trouvé)");
    string n1Supprime2 = (supprimerElement(n1, 10) ? "(Réussie)" : "(Échec - élément non trouvé)");
    string n1Supprime3 = (supprimerElement(n1, 60) ? "(Réussie)" : "(Échec - élément non trouvé)");

    cout << "Liste initiale: ";
    afficherListe(n1);
    cout << endl;
    cout << "Suppression de 30: ";
    afficherListe(n1);
    cout << " " << n1Supprime << endl;
    cout << "Suppression de 10: ";
    afficherListe(n1);
    cout << " " << n1Supprime2 << endl;
    cout << "Suppression de 60: ";
    afficherListe(n1);
    cout << " " << n1Supprime3 << endl;

    return 0;
}