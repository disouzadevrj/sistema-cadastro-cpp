#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Usuario {
    string nome;
    string email;
    int idade;
};

vector<Usuario> usuarios;

void carregarDados() {
    ifstream arquivo("dados.txt");
    if (arquivo) {
        Usuario temp;
        while (getline(arquivo, temp.nome) && 
               getline(arquivo, temp.email) && 
               (arquivo >> temp.idade)) {
            arquivo.ignore(); // Ignora o \n após a idade
            usuarios.push_back(temp);
        }
    }
}

void salvarDados() {
    ofstream arquivo("dados.txt");
    for (const auto& usuario : usuarios) {
        arquivo << usuario.nome << "\n"
                << usuario.email << "\n"
                << usuario.idade << "\n";
    }
}

void cadastrarUsuario() {
    Usuario novo;
    cout << "\n--- CADASTRO ---\n";
    cout << "Nome: ";
    getline(cin, novo.nome);
    cout << "Email: ";
    getline(cin, novo.email);
    cout << "Idade: ";
    cin >> novo.idade;
    cin.ignore(); // Limpa o buffer
    
    usuarios.push_back(novo);
    salvarDados();
    cout << "Usuário cadastrado com sucesso!\n";
}

void listarUsuarios() {
    cout << "\n--- LISTAGEM ---\n";
    for (size_t i = 0; i < usuarios.size(); ++i) {
        cout << "ID: " << i << "\n"
             << "Nome: " << usuarios[i].nome << "\n"
             << "Email: " << usuarios[i].email << "\n"
             << "Idade: " << usuarios[i].idade << "\n\n";
    }
}

void buscarUsuario() {
    string termo;
    cout << "\nDigite nome ou email para buscar: ";
    getline(cin, termo);
    
    bool encontrado = false;
    for (const auto& usuario : usuarios) {
        if (usuario.nome.find(termo) != string::npos || 
            usuario.email.find(termo) != string::npos) {
            cout << "\nNome: " << usuario.nome << "\n"
                 << "Email: " << usuario.email << "\n"
                 << "Idade: " << usuario.idade << "\n";
            encontrado = true;
        }
    }
    
    if (!encontrado) {
        cout << "Nenhum usuário encontrado.\n";
    }
}

int main() {
    carregarDados();
    
    int opcao;
    do {
        cout << "\n=== SISTEMA DE CADASTRO ===\n"
             << "1. Cadastrar usuário\n"
             << "2. Listar usuários\n"
             << "3. Buscar usuário\n"
             << "0. Sair\n"
             << "Escolha: ";
        cin >> opcao;
        cin.ignore(); // Limpa o buffer
        
        switch(opcao) {
            case 1: cadastrarUsuario(); break;
            case 2: listarUsuarios(); break;
            case 3: buscarUsuario(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opção inválida!\n";
        }
    } while (opcao != 0);
    
    return 0;
}