
#include "BankAccount.hpp"
using namespace std;

BankAccount::BankAccount()
    : m_numero(""), m_solde(0.0) {
}

BankAccount::BankAccount(const string& numero,
                         double soldeInitial)
    : m_numero(numero),
      m_solde(soldeInitial >= 0 ? soldeInitial : 0.0) {
}

void BankAccount::deposer(double montant) {
    if (montant > 0) {
        m_solde += montant;
    }
}

bool BankAccount::retirer(double montant) {
    if (montant > 0 && montant <= m_solde) {
        m_solde -= montant;
        return true;
    }
    return false;
}

void BankAccount::afficher() const {
    cout << "Numero : " << m_numero << endl;
    cout << "Solde : " << m_solde << endl;
}

string BankAccount::getNumero() const {
    return m_numero;
}

double BankAccount::getSolde() const {
    return m_solde;
}
