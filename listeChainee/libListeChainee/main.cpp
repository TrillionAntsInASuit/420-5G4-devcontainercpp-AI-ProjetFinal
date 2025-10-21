#include <iostream>
#include "libListeChainee.h"
using namespace std;

int main()
{
    int choix;
    Noeud *tete = nullptr;

    while (choix != 9)
    {
        cout << "=== GESTIONNAIRE DE LISTE CHAÎNÉE ===" << endl;
        cout << "1. Ajouter au début" << endl;
        cout << "2. Ajouter à la fin" << endl;
        cout << "3. Rechercher élément" << endl;
        cout << "4. Supprimer élément" << endl;
        cout << "5. Afficher liste" << endl;
        cout << "6. Compter éléments" << endl;
        cout << "7. Inverser liste" << endl;
        cout << "8. Vider liste" << endl;
        cout << "9. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix)
        {
        case 1:
        {
            int valeur;
            cout << "Entrez la valeur à ajouter au début : ";
            cin >> valeur;
            ajouterDebut(tete, valeur);
            break;
        }
        case 2:
        {
            int valeur;
            cout << "Entrez la valeur à ajouter à la fin : ";
            cin >> valeur;
            ajouterFin(tete, valeur);
            break;
        }
        case 3:
        {
            int valeur;
            cout << "Entrez la valeur à rechercher : ";
            cin >> valeur;
            if (rechercher(tete, valeur))
            {
                cout << "Élément trouvé." << endl;
            }
            else
            {
                cout << "Élément non trouvé." << endl;
            }
            break;
        }
        case 4:
        {
            int valeur;
            cout << "Entrez la valeur à supprimer : ";
            cin >> valeur;
            if (supprimerElement(tete, valeur))
            {
                cout << "Élément supprimé." << endl;
            }
            else
            {
                cout << "Élément non trouvé." << endl;
            }
            break;
        }
        case 5:
        {
            afficherListe(tete);
            break;
        }
        case 6:
        {
            int count = compterElements(tete);
            cout << "Nombre d'éléments : " << count << endl;
            break;
        }
        case 7:
        {
            inverserListe(tete);
            cout << "Liste inversée." << endl;
            break;
        }
        case 8:
        {
            viderListe(tete);
            cout << "Liste vidée." << endl;
            break;
        }
        case 9:
        {
            viderListe(tete);
            cout << "Au revoir !" << endl;
            return 0;
        }
        default:
            cout << "Choix invalide." << endl;
        }
    }

    return 0;
}