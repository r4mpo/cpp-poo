// Importa bibliotecas padrão
#include <iostream>
#include <string>
#include "Conta.hpp"

// Usa funções do std
using namespace std;

// compilando os dois arquivos juntos
// g++ .\main.cpp Conta.cpp -o index.exe

int main()
{
    // Cria variável a partir da classe
    ContaClasse primeiraConta;
    primeiraConta.defineSaldo(14.32);

    // Cria variável a partir da classe
    ContaClasse segundaConta;
    segundaConta.defineSaldo(13.22);

    // Usando método
    primeiraConta.sacar(0.32);

    // Imprimindo informações
    cout << "Uma conta possui R$" << primeiraConta.recuperaSaldo() << " e a outra R$" << segundaConta.recuperaSaldo() << endl;

    return 0;
}