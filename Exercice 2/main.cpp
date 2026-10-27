#include <iostream>
#include "Library.hpp"

int main() {
    Library bibliotheque;

    Book b1("Le Petit Prince", "Antoine de Saint-Exupery",
            "ISBN001", 1943);
    Book b2("L'Etranger", "Albert Camus", "ISBN002", 1942);

    bibliotheque.ajouterLivre(b1);
    bibliotheque.ajouterLivre(b2);

    std::cout << "=== Liste des livres ===" << std::endl;
    bibliotheque.listerLivres();

    std::cout << "\n=== Recherche ===" << std::endl;
    const Book* resultat = bibliotheque.trouverParISBN("ISBN001");

    if (resultat != nullptr) {
        resultat->afficher();
    } else {
        std::cout << "Livre introuvable !" << std::endl;
    }

    return 0;
}