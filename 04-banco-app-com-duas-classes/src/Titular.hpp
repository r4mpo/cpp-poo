#pragma once // não incluir várias vezes na unidade de tradução
#include <string>

class Titular
{
    std::string cpf;
    std::string nome;

public:
    Titular(std::string cpf, std::string nome);
    ~Titular();
    std::string recuperaNome();
};