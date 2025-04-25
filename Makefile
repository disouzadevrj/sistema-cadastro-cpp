# Makefile para Sistema de Cadastro C++

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = sistema_cadastro
SRC = sistema_cadastro.cpp cadastro.cpp
OBJ = $(SRC:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Compilação e linkagem
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compilação dos arquivos objetos
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Execução do programa
run: $(TARGET)
	./$(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) *.o test_runner

# Testes
test: tests/test_runner.cpp
	$(CXX) $(CXXFLAGS) -DTEST_MODE -o test_runner tests/test_runner.cpp
	./test_runner

.PHONY: all run clean test
