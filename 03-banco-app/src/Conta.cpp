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

float ContaClasse::recuperaSaldo(){
    return saldo;
}

void ContaClasse::defineSaldo(float valorSaldo){
    saldo = valorSaldo;
}
