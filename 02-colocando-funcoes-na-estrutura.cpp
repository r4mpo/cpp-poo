// Importa bibliotecas padrão
#include <iostream>
#include <string>

// Usa funções do std
using namespace std;

bool transferenciaValida(float valor)
{
    if (valor <= 0)
    {
        cout << "Não é possível fazer transferência com R$0.00";
        return false;
    }

    return true;
}

// Cria a estrutura
struct Conta
{
    int numero;
    int cpfTitular;
    float saldo;
    string nomeTitular;

    // Esse Conta& significa que a função recebe
    // uma referência. Em vez de receber uma cópia das
    // informações da variável, recebe a própria, modificando
    // seu valor diretamente na função.
    void sacar(float valorSaque)
    {
        if (transferenciaValida(valorSaque))
        {
            saldo = saldo - valorSaque;
        }
    }

    // Esse Conta& significa que a função recebe
    // uma referência. Em vez de receber uma cópia das
    // informações da variável, recebe a própria, modificando
    // seu valor diretamente na função.
    void depositar(float valorDeposito)
    {
        if (transferenciaValida(valorDeposito))
        {
            saldo = saldo + valorDeposito;
        }
    }
};

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