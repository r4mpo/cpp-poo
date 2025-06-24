#include "Conta.hpp"
#include <iostream>

ContaClasse::ContaClasse(std::string numero, std::string cpfTitular, std::string nomeTitular)
{
    this->numero = numero;
    this->cpfTitular = cpfTitular;
    this->nomeTitular = nomeTitular;
}

bool transferenciaValida(float valor)
{
    if (valor <= 0)
    {
        std::cout << "Não é possível fazer transferência com R$0.00";
        return false;
    }

    return true;
}

void ContaClasse::sacar(float valorSacar)
{
    if (transferenciaValida(valorSacar))
    {
        saldo = saldo - valorSacar;
    }
}

void ContaClasse::depositar(float valorDepositar)
{
    if (transferenciaValida(valorDepositar))
    {
        saldo = saldo + valorDepositar;
    }
}

float ContaClasse::recuperaSaldo()
{
    return saldo;
}

void ContaClasse::defineSaldo(float valorSaldo)
{
    saldo = valorSaldo;
}
