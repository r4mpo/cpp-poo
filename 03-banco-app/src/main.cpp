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
    ContaClasse primeiraConta("123456", "Erick", "111.111.111.11");
    primeiraConta.defineSaldo(14.32);

    // Cria variável a partir da classe
    ContaClasse segundaConta("123456", "Rampo", "222.222.222.22");;
    segundaConta.defineSaldo(13.22);

    // Usando método
    primeiraConta.sacar(0.32);

    // Imprimindo informações
    cout << "Uma conta possui R$" << primeiraConta.recuperaSaldo() << " e a outra R$" << segundaConta.recuperaSaldo() << endl;

    // Imprimindo o numero de contas
    cout << "Número de contas: " << ContaClasse::numeroDeContas << endl;

    return 0;
}