#include <iostream>

using namespace std;

int main(){
    int* ponteiro1; // ponteiro (tipo int, igual uma variável qualquer)
    int* ponteiro2;

    int valor1;
    valor1 = 4;

    ponteiro1 = &valor1;
    *ponteiro2 = 12;

    delete ponteiro2; // removendo ponteiro
    
    return 0;
}