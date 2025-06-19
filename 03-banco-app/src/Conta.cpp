#include "Conta.hpp"
#include <iostream>

bool transferenciaValida(float valor)
{
    if (valor <= 0)
    {
        std::cout << "Não é possível fazer transferência com R$0.00";
        return false;
    }

    return true;
}

void Conta::sacar(float valorSacar)
{
    if (transferenciaValida(valorSacar))
    {
        saldo = saldo - valorSacar;
    }
}

void Conta::depositar(float valorDepositar)
{
    if (transferenciaValida(valorDepositar))
    {
        saldo = saldo + valorDepositar;
    }
}