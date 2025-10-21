#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne {
private:
    std::string nom;
    std::string prenom;
    int age;

public:
    // Constructeurs
    Personne();
    Personne(const std::string& nom, const std::string& prenom, int age);
    
    // Destructeur
    ~Personne();
    
    // Méthodes d'accès (getters)
    std::string getNom() const;
    std::string getPrenom() const;
    int getAge() const;
    
    // Méthodes de modification (setters)
    void setNom(const std::string& nom);
    void setPrenom(const std::string& prenom);
    void setAge(int age);
    
    // Autres méthodes
    void afficher() const;
    void anniversaire();
    std::string getNomComplet() const;
};

#endif // PERSONNE_H