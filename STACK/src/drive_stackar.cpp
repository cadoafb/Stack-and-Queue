#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error
#include "stackar.h"

int main( ) { 
//Teste FLOAT
	StackAr<float> vetorteste(100);
std::cout << ">>> Inserindo Elementos na pilha..." << std::endl;
	std::cout << "Adicionando: 10.3"<< std::endl;
	vetorteste.push(10.3);
std::cout << "Adicionando: 20.3"<< std::endl;
	vetorteste.push(20.3);
std::cout << "Adicionando: 30.3"<< std::endl;
	vetorteste.push(30.3);

std::cout << std::endl;
std::cout << ">>> Imprimindo Elementos da pilha..." << std::endl;
	vetorteste.print();
	std::cout << std::endl;

std::cout << std::endl;
std::cout << ">>> Teste pop..." << std::endl;
	vetorteste.pop();
	vetorteste.print();
	std::cout << std::endl;


std::cout << ">>> Teste top..." << std::endl;
	std::cout << vetorteste.top();
	std::cout << std::endl;

std::cout << ">>> Teste clear..." << std::endl;
	vetorteste.makeEmpty();
	vetorteste.print();

//Teste INT

StackAr<int> vetorteste2(100);
std::cout << ">>> Inserindo Elementos na pilha..." << std::endl;
std::cout << "Adicionando: 10"<< std::endl;
	vetorteste2.push(10);
std::cout << "Adicionando: 20"<< std::endl;
	vetorteste2.push(20);
std::cout << "Adicionando: 30"<< std::endl;
	vetorteste2.push(30);

std::cout << std::endl;
std::cout << ">>> Imprimindo Elementos da pilha..." << std::endl;
	vetorteste2.print();
	std::cout << std::endl;

std::cout << std::endl;
std::cout << ">>> Teste pop..." << std::endl;
	vetorteste2.pop();
	vetorteste2.print();
	std::cout << std::endl;

std::cout << std::endl;
std::cout << ">>> Teste top..." << std::endl;
	std::cout << vetorteste2.top();
	std::cout << std::endl;

std::cout << ">>> Teste clear..." << std::endl;
	vetorteste2.makeEmpty();
	vetorteste2.print();

//Teste STRING

std::cout << std::endl;
StackAr<std::string> vetorteste3(100);
std::cout << ">>> Inserindo Elementos na pilha..." << std::endl;
std::cout << "Adicionando: STRING 1"<< std::endl;
	vetorteste3.push("STRING 1");
std::cout << "Adicionando: STRING 2"<< std::endl;
	vetorteste3.push("STRING 2");
std::cout << "Adicionando: STRING 3"<< std::endl;
	vetorteste3.push("STRING 3");

std::cout << std::endl;
std::cout << ">>> Imprimindo Elementos da pilha..." << std::endl;
	vetorteste3.print();
	std::cout << std::endl;

std::cout << ">>> Teste pop..." << std::endl;
	vetorteste3.pop();
	vetorteste3.print();
	std::cout << std::endl;

std::cout << ">>> Teste top..." << std::endl;
	std::cout << vetorteste3.top();
	std::cout << std::endl;

std::cout << ">>> Teste clear..." << std::endl;
	vetorteste3.makeEmpty();
	vetorteste3.print();

	return EXIT_SUCCESS;
}
