# Sistema de Cadastro em C++

Este projeto é um sistema simples de cadastro de usuários desenvolvido em C++. Ele permite cadastrar usuários com nome, idade e CPF, além de exibir todos os registros armazenados.

## 🚀 Funcionalidades

- Cadastro de usuários (nome, idade, CPF)
- Exibição de todos os usuários cadastrados
- Interface via linha de comando

## 🧠 Tecnologias Utilizadas

- Linguagem: C++
- Paradigma: Procedural / Modular

## 🛠️ Como Executar o Projeto

1. Clone o repositório:
```bash
git clone https://github.com/disouzadevrj/sistema-cadastro-cpp.git
```

2. Acesse o diretório do projeto:
```bash
cd sistema-cadastro-cpp
```

3. Compile os arquivos:
```bash
g++ main.cpp src/cadastro.cpp -I include -o sistema
```

4. Execute o programa:
```bash
./sistema
```

## 📁 Estrutura do Projeto

```
sistema-cadastro-cpp/
├── include/
│   └── cadastro.hpp         # Cabeçalhos das funções e definição de struct
│
├── src/
│   └── cadastro.cpp         # Implementação das funções
│
├── main.cpp                 # Função principal e interação com o usuário
└── README.md                # Documentação do projeto
```

## 📌 Possíveis Melhorias Futuras

- Remover registros
- Salvar e carregar os dados de um arquivo
- Validação de entrada
- Menu interativo com mais opções

## 📄 Licença

Este projeto está sob a licença MIT. Sinta-se à vontade para usar, modificar e compartilhar.

---

Desenvolvido com 💻 por [disouzadevrj](https://github.com/disouzadevrj)

