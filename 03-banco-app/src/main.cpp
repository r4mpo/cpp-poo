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
    // Cria variável a partir da estrutura
    Conta primeiraConta;
    primeiraConta.saldo = 14.32;
    // Cria variável a partir da estrutura
    Conta segundaConta;
    segundaConta.saldo = 13.22;

    // Usando método
    primeiraConta.sacar(0.32);

    // Imprimindo informações
    cout << "Uma conta possui R$" << primeiraConta.saldo << " e a outra R$" << segundaConta.saldo << endl;

    return 0;
}