#pragma once // não incluir várias vezes na unidade de tradução
#include <string>
#include "Titular.hpp"

// cria a class
class ContaClasse
{
    float saldo = 0;
    std::string numero;
    Titular titular;
    bool transferenciaValida(float valor);

public:
    ContaClasse(std::string numero, Titular titular);
    ~ContaClasse();
    static int numeroDeContas;
    void sacar(float valorSacar);
    void depositar(float valorDepositar);
    void defineSaldo(float valorSaldo);
    float recuperaSaldo();
};

// Aiferença básica entre as estruturas e classes
// é que na class, por padrão, é tudo privado, enquanto no
// struct, por padrão, tudo é publico