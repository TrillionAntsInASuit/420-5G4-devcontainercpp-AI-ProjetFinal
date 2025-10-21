#include "Personne.h"
#include <iostream>

// Constructeur par défaut
Personne::Personne() : nom(""), prenom(""), age(0) {
    // Constructeur vide avec liste d'initialisation
}

// Constructeur avec paramètres
Personne::Personne(const std::string& nom, const std::string& prenom, int age) 
    : nom(nom), prenom(prenom), age(age) {
    // Validation de l'âge
    if (age < 0) {
        this->age = 0;
    }
}

// Destructeur
Personne::~Personne() {
    // Nettoyage si nécessaire (ici pas besoin)
}

// Méthodes d'accès (getters)
std::string Personne::getNom() const {
    return nom;
}

std::string Personne::getPrenom() const {
    return prenom;
}

int Personne::getAge() const {
    return age;
}

// Méthodes de modification (setters)
void Personne::setNom(const std::string& nom) {
    this->nom = nom;
}

void Personne::setPrenom(const std::string& prenom) {
    this->prenom = prenom;
}

void Personne::setAge(int age) {
    if (age >= 0) {
        this->age = age;
    }
}

// Méthode d'affichage
void Personne::afficher() const {
    std::cout << "Nom: " << nom << " " << prenom 
              << ", Age: " << age << " ans" << std::endl;
}

// Méthode pour incrémenter l'âge
void Personne::anniversaire() {
    age++;
    std::cout << "Joyeux anniversaire ! " << prenom 
              << " a maintenant " << age << " ans." << std::endl;
}

// Méthode pour obtenir le nom complet
std::string Personne::getNomComplet() const {
    return prenom + " " + nom;
}