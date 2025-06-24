#include "Conta.hpp"
#include <iostream>

// Uma das formas de inicializar o construtor:
// ContaClasse::ContaClasse(std::string numero, std::string cpfTitular, std::string nomeTitular)
// {
//     this->numero = numero;
//     this->cpfTitular = cpfTitular;
//     this->nomeTitular = nomeTitular;
// }

int ContaClasse::numeroDeContas = 0;

// Forma mais limpa e profissional de inicializar o construtor:
ContaClasse::ContaClasse(std::string numero, std::string cpfTitular, std::string nomeTitular): numero(numero), cpfTitular(cpfTitular), nomeTitular(nomeTitular){
    numeroDeContas++;
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
