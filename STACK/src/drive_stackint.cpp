/* Arquivo de testes para uma pilha de inteiros. */
#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error
#include "stackint.h"

int main(){
		std::cout << ">>> Teste stackInt:" << std::endl;
		
		stackInt pilhaInt(1);
		bool testeEmpty = pilhaInt.empty();
		(testeEmpty == 1) ? std::cout << "Vetor vazio..."<< std::endl : std::cout << "Vetor com elementos..."<< std::endl;
		std::cout << ">>> Inserindo Elementos na pilha..." << std::endl;
		std::cout << "Adicionando: 1"<< std::endl;
			pilhaInt.push(1);
		std::cout << "Adicionando: 2"<< std::endl;
			pilhaInt.push(2);
		std::cout << "Adicionando: 3"<< std::endl;
			pilhaInt.push(3);

		std::cout << std::endl;

		testeEmpty = pilhaInt.empty();
		(testeEmpty == 1) ? std::cout << "Vetor vazio..."<< std::endl : std::cout << "Vetor com elementos..."<< std::endl;
		std::cout << "Topo: " << pilhaInt.top() << std::endl;
		testeEmpty = 0;
		std::cout << std::endl;

		std::cout << "Removendo topo..."<< std::endl;
			pilhaInt.pop( );
		std::cout << "Topo: " << pilhaInt.top() << std::endl;
		
		std::cout << std::endl;

		std::cout << "Esvaziando vetor..."<< std::endl;
			pilhaInt.clear();
		testeEmpty = pilhaInt.empty();
		(testeEmpty == 1) ? std::cout << "Vetor vazio..."<< std::endl : std::cout << "Vetor com elementos..."<< std::endl;
		testeEmpty = 0;
		std::cout << std::endl;	
		std::cout << ">>> Inserindo Elementos na pilha..." << std::endl;
		std::cout << "Adicionando: 4"<< std::endl;
			pilhaInt.push(4);
		std::cout << "Adicionando: 5"<< std::endl;
			pilhaInt.push(5);
		std::cout << "Adicionando: 6"<< std::endl;
			pilhaInt.push(6);

		(testeEmpty == 1) ? std::cout << "Vetor vazio..."<< std::endl : std::cout << "Vetor com elementos..."<< std::endl;
		std::cout << "Topo: " << pilhaInt.top() << std::endl;
		std::cout << ">>> Normal exiting..."<< std::endl;
	return EXIT_SUCCESS;
}