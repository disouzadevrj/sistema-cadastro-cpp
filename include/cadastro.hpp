#ifndef CADASTRO_HPP
#define CADASTRO_HPP

#include <string>
using namespace std;

struct Pessoa {
    int id;
    string nome;
    int idade;
};

void adicionarPessoa(Pessoa lista[], int& total);
void listarPessoas(Pessoa lista[], int total);
void buscarPessoa(Pessoa lista[], int total, int id);

#endif