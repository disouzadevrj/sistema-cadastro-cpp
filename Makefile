# Makefile para Sistema de Cadastro C++

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = sistema_cadastro
SRC = sistema_cadastro.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all run clean

test: $(SRC)
	$(CXX) $(CXXFLAGS) -DTEST_MODE -o test_runner tests/test_runner.cpp
	./test_runner
