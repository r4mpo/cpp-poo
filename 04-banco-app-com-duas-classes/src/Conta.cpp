#include "Conta.hpp"
#include <iostream>

int ContaClasse::numeroDeContas = 0;

// Forma mais limpa e profissional de inicializar o construtor:
ContaClasse::ContaClasse(std::string numero, Titular titular): numero(numero), titular(titular){
    numeroDeContas++;
}

// Método DESTRUTOR da classe
ContaClasse::~ContaClasse() {
    numeroDeContas--;
}

bool ContaClasse::transferenciaValida(float valor)
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
    if (this->transferenciaValida(valorSacar))
    {
        saldo = saldo - valorSacar;
    }
}

void ContaClasse::depositar(float valorDepositar)
{
    if (this->transferenciaValida(valorDepositar))
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
