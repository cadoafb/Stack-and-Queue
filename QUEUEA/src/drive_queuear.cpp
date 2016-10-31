/*
 * drive_queuear.cpp
 *
 * Created on 15/04/2016
 */

/*
 * @author Adelino Afonso
 */

#include <iostream>
#include <string>

#include "queuear.h"

int main(){
	// Teste da fila com STRINGS 


	try{
		std::cout << "Enfileirando nomes..." << std::endl;
		QueueAr<std::string> Nomes;

		Nomes.enqueue("Cunha");
		Nomes.enqueue("Temmer");
		Nomes.enqueue("Bolsonaro");

		Nomes.print();

		std::cout << "Desenfileirando nomes..." << std::endl;
		
		Nomes.dequeue();

		std::cout << std::endl;

		Nomes.print();

		std::cout << "Apagando nomes..." << std::endl;

		Nomes.makeEmpty();

		Nomes.print();

		// Teste da fila com INTEIROS

		QueueAr<int> numInt;
		std::cout << "Enfileirando números de 1 a 99..." << std::endl;

		for (int i = 0; i < 100; ++i){
			numInt.enqueue(i);
		}

		numInt.print();

		std::cout << "Desenfileirando números..." << std::endl;	
			numInt.dequeue();

		numInt.print();
		
		std::cout << "Apagando numeros..." << std::endl;

		numInt.makeEmpty();

		numInt.print();	

		// Teste da fila com REAIS

		QueueAr<float> numFloat;
		std::cout << "Enfileirando números..." << std::endl;

		
		numFloat.enqueue(10.3);
		numFloat.enqueue(20.3);
		numFloat.enqueue(30.3);

		numFloat.print();

		std::cout << "Desenfileirando números..." << std::endl;	
			numFloat.dequeue();

		numFloat.print();
		
		std::cout << "Apagando numeros..." << std::endl;

		numFloat.makeEmpty();

		numFloat.print();
	}catch ( std::out_of_range &erro ){
		std::cerr << "Underflow"<< erro.what() << std::endl;
	}

	std::cout << "Normal exiting...\n";
	
	return EXIT_SUCCESS;
}
