#include "Titular.hpp"

Titular::Titular(std::string cpf, std::string nome): cpf(cpf), nome(nome)
{
    // 
}

Titular::~Titular()
{
    // 
}

std::string Titular::recuperaNome()
{
    return nome;
}