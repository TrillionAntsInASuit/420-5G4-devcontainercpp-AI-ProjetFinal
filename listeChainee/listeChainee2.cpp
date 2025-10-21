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

void ajouterDebut(Noeud*& tete, int valeur) {
    Noeud* nouveauNoeud = new Noeud(valeur);
    nouveauNoeud->suivant = tete;
    tete = nouveauNoeud;
}

void afficherListe(Noeud* tete) {
    cout << "Liste après ajout de " << tete->valeur << ": ";
    Noeud* courant = tete;
    while (courant != nullptr) {
        cout << courant->valeur << " -> ";
        courant = courant->suivant;
    }
    cout << "NULL" << endl;
}

int main() {
    Noeud* tete = nullptr;
    ajouterDebut(tete, 30);
    afficherListe(tete);
    ajouterDebut(tete, 20);
    afficherListe(tete);
    ajouterDebut(tete, 10);
    afficherListe(tete);
    return 0;
}