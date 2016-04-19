/* Arquivo de testes para uma fila genérica de objetos. */

#include <iostream>
#include <string>

#include "queuear.h"

int main(){
	QueueAr<int> num;
	
	for (int i = 0; i < 10; ++i)
	{
		num.enqueue(i);
	}
	num.print();
	std::cout << "Normal exiting...\n";
	
	return EXIT_SUCCESS;
}