#include <iostream>
using namespace std;

class Noeud {
public:
    int valeur;
    Noeud* suivant;

    Noeud(int val) : valeur(val), suivant(nullptr) {}
    ~Noeud() {}
};

void ajouterFin(Noeud*& tete, int valeur) {
    Noeud* nouveauNoeud = new Noeud(valeur);
    if (tete == nullptr) {
        tete = nouveauNoeud;
    } else {
        Noeud* courant = tete;
        while (courant->suivant != nullptr) {
            courant = courant->suivant;
        }
        courant->suivant = nouveauNoeud;
    }
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
    cout << "NULL" << endl;
}

int main() {
    Noeud* tete = nullptr;
    ajouterFin(tete, 10);
    ajouterFin(tete, 20);

    cout << "Liste initiale: ";
    afficherListe(tete);

    ajouterFin(tete, 30);
    cout << "Après ajout de 30: ";
    afficherListe(tete);

    ajouterFin(tete, 40);
    cout << "Après ajout de 40: ";
    afficherListe(tete);

    ajouterFin(tete, 50);
    cout << "Après ajout de 50: ";
    afficherListe(tete);

    return 0;
}
