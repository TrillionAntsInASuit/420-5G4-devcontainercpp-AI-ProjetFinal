#include <iostream>
using namespace std;


class Voiture {
private:
    string marque;
    int vitesse;

public:
    // Constructeur
    Voiture(string m){
        this->marque = m; 
        this->vitesse = 0; 
    }

    // Constructeur par copie
    Voiture(Voiture &other){
        this->marque = other.marque;
        this->vitesse = other.vitesse;
    }

    // surcharge de l'opérateur =
    Voiture& operator=(const Voiture& other){
        this->marque = other.marque;
        this->vitesse = other.vitesse;
        return *this;
    }

    // Destructeur
    ~Voiture(){
        cout << "Destruction de la voiture : " << this->marque << endl;
    }

    // Méthodes
    void accelerer(int increment){ 
        vitesse += increment; 
    }

    void afficherInfo() {
        cout << "Marque: " << marque << ", Vitesse: " << vitesse << endl;
    }
    
};

int main() {
    Voiture maVoiture("Toyota");
    maVoiture.accelerer(10);
    maVoiture.afficherInfo();
    
    return 0;
}