// tests/test_runner.cpp
#include <iostream>
#include <vector>
#include "../sistema_cadastro.cpp" // Inclui o código principal para teste

void test_cadastro() {
    usuarios.clear();
    Usuario teste = {"Teste", "teste@email.com", 25};
    usuarios.push_back(teste);
    
    if (usuarios.size() != 1) {
        std::cerr << "❌ Teste cadastro falhou\n";
        return;
    }
    
    if (usuarios[0].nome != "Teste") {
        std::cerr << "❌ Teste nome falhou\n";
        return;
    }
    
    std::cout << "✅ Teste cadastro passou\n";
}

int main() {
    std::cout << "\n=== Executando Testes ===\n";
    test_cadastro();
    std::cout << "=== Fim dos Testes ===\n";
    return 0;
}