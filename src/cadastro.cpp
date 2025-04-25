#include "cadastro.hpp"
#include <iostream>

void adicionarPessoa(Pessoa lista[], int& total) {
    cout << "ID: ";
    cin >> lista[total].id;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, lista[total].nome);
    cout << "Idade: ";
    cin >> lista[total].idade;
    total++;
}

void listarPessoas(Pessoa lista[], int total) {
    for (int i = 0; i < total; ++i) {
        cout << "ID: " << lista[i].id
             << " | Nome: " << lista[i].nome
             << " | Idade: " << lista[i].idade << endl;
    }
}

void buscarPessoa(Pessoa lista[], int total, int id) {
    for (int i = 0; i < total; ++i) {
        if (lista[i].id == id) {
            cout << "Encontrado: " << lista[i].nome
                 << " (" << lista[i].idade << " anos)" << endl;
            return;
        }
    }
    cout << "Pessoa com ID " << id << " não encontrada." << endl;
}