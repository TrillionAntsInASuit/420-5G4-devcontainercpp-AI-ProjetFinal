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