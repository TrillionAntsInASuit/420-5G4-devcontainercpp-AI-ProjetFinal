#include <iostream>
#include <string>
using namespace std;

class Forme {
protected:
    string nom;
    string couleur;

public:
    Forme(string n, string c) : nom(n), couleur(c) {}

    virtual double calculerAire() const = 0;
    virtual double calculerPerimetre() const = 0;

    virtual void afficher() const {
        cout << "Forme: " << nom << ", Couleur: " << couleur << endl;
    }
};

class Rectangle : public Forme {
private:
    double largeur;
    double hauteur;

public:
    Rectangle(string m, string c, double l, double h)
        : Forme(m, c), largeur(l), hauteur(h) {}

    double calculerAire() const override {
        return largeur * hauteur;
    }

    double calculerPerimetre() const override {
        return 2 * (largeur + hauteur);
    }

    void afficher() const override {
        Forme::afficher();
        cout << "Largeur: " << largeur 
             << ", Hauteur: " << hauteur 
             << ", Aire: " << calculerAire()
             << ", Périmètre: " << calculerPerimetre()
             << endl;
    }
};

class Cercle : public Forme {
private:
    double rayon;

public:
    Cercle(string m, string c, double r)
        : Forme(m, c), rayon(r) {}

    double calculerAire() const override {
        return 3.14 * rayon * rayon;
    }

    double calculerPerimetre() const override {
        return 2 * 3.14 * rayon;
    }

    void afficher() const override {
        Forme::afficher();
        cout << "Rayon: " << rayon 
             << ", Aire: " << calculerAire()
             << ", Périmètre: " << calculerPerimetre()
             << endl;
    }
};

class Triangle : public Forme {
private:
    double base;
    double hauteur;

public:
    Triangle(string m, string c, double b, double h)
        : Forme(m, c), base(b), hauteur(h) {}

    double calculerAire() const override {
        return 0.5 * base * hauteur;
    }

    double calculerPerimetre() const override {
        return 3 * base;
    }

    void afficher() const override {
        Forme::afficher();
        cout << "Base: " << base 
             << ", Hauteur: " << hauteur 
             << ", Aire: " << calculerAire()
             << ", Périmètre: " << calculerPerimetre()
             << endl;
    }
};

class GestionnaireFormes {
private:
    Forme* formes[100];
    int nbFormes;

public:
    GestionnaireFormes() {
        nbFormes = 0;
    }

    void ajouterForme(Forme* forme) {
        if (nbFormes < 100) {
            formes[nbFormes++] = forme;
        } else {
            cout << "Erreur : tableau plein." << endl;
            delete forme;
        }
    }

    void afficherToutesLesFormes() const {
        cout << "---- Liste des formes ----" << endl;
        for (int i = 0; i < nbFormes; i++) {
            formes[i]->afficher();
        }
        cout << "--------------------------" << endl;
    }

    double calculerAireTotale() const {
        double total = 0.0;
        for (int i = 0; i < nbFormes; i++) {
            total += formes[i]->calculerAire();
        }
        return total;
    }

    ~GestionnaireFormes() {
        for (int i = 0; i < nbFormes; i++) {
            delete formes[i];
        }
    }
};

int main() {
    GestionnaireFormes gestionnaire;

    gestionnaire.ajouterForme(new Rectangle("Rect1", "Rouge", 4.0, 5.0));
    gestionnaire.ajouterForme(new Cercle("Cercle1", "Bleu", 3.0));
    gestionnaire.ajouterForme(new Triangle("Triangle1", "Vert", 4.0, 5.0));

    gestionnaire.afficherToutesLesFormes();
    cout << "Aire totale : " << gestionnaire.calculerAireTotale() << endl;

    return 0;
}
