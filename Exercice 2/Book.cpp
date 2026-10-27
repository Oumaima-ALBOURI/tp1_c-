#include "Book.hpp"

Book::Book() : m_titre(""), m_auteur(""), m_isbn(""), m_annee(0) {}

Book::Book(const std::string& titre, const std::string& auteur,
           const std::string& isbn, int annee)
    : m_titre(titre), m_auteur(auteur), m_isbn(isbn), m_annee(annee) {}

std::string Book::getTitre() const { return m_titre; }
std::string Book::getAuteur() const { return m_auteur; }
std::string Book::getISBN() const { return m_isbn; }
int Book::getAnnee() const { return m_annee; }

void Book::afficher() const {
    std::cout << "Titre : " << m_titre << std::endl;
    std::cout << "Auteur : " << m_auteur << std::endl;
    std::cout << "ISBN : " << m_isbn << std::endl;
    std::cout << "Annee : " << m_annee << std::endl;
}