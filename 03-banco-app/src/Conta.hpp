#pragma once // não incluir várias vezes na unidade de tradução
#include <string>

// Cria a estrutura
struct ContaEstrutura
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;

    void sacar(float valorSacar);
    void depositar(float valorDepositar);

private:
    float saldo;
};

// cria a class
class ContaClasse
{
    float saldo = 0;

    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;

public:
    ContaClasse(std::string numero, std::string cpfTitular, std::string nomeTitular);
    void sacar(float valorSacar);
    void depositar(float valorDepositar);
    void defineSaldo(float valorSaldo);
    float recuperaSaldo();
};

// Aiferença básica entre as estruturas e classes
// é que na class, por padrão, é tudo privado, enquanto no
// struct, por padrão, tudo é publico