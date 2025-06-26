// Importa bibliotecas padrão
#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

// Usa funções do std
using namespace std;

// compilando os dois arquivos juntos
// g++ .\main.cpp Conta.cpp -o index.exe

int main()
{
    Titular titular("123456", "Erick");
    ContaClasse primeiraConta("111.111.111.11", titular);
    primeiraConta.defineSaldo(14.32);


    // Imprimindo informações
    cout << "A conta possui: R$" << primeiraConta.recuperaSaldo() << " e o titular é: " << titular.recuperaNome() << endl;

    return 0;
}