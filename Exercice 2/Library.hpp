#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> m_livres;

public:
    void ajouterLivre(const Book& livre);
    const Book* trouverParISBN(const std::string& isbn) const;
    void listerLivres() const;
};

#endif