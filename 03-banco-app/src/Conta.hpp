#pragma once // não incluir várias vezes na unidade de tradução
#include <string>

// Cria a estrutura
struct Conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

    void sacar(float valorSacar);
    void depositar(float valorDepositar);
};