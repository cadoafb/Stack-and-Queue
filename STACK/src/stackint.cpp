#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error
#include "stackint.h"

stackInt::stackInt(int _size) : topo(0), capacidade(_size)
{
	vetor = new int(_size);
}
stackInt::~stackInt()
{
	delete[] vetor;
}

int stackInt::pop(void){
	int remover;
	if(empty())
		throw std::length_error("Undeflow");
	else
		remover = vetor[topo--];

	return remover;
}


void stackInt::push(int _value)
{
	if (topo == capacidade) // Não há mais espaço
		resize(2*capacidade);

	vetor[topo++] = _value;
}

int stackInt::top(void) const
{
	if(topo == 0)
		throw std::domain_error("Pilha vazia!");
	return vetor[topo-1];
}




