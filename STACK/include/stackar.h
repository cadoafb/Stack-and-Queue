#ifndef _STACKAR_H 
#define _STACKAR_H

#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error
#include "AbsStack.h" // Inclui a interface abstrata da pilha.

// Implementando interface via herança.
template <class Object>
class StackAr : public AbsStack<Object>{
public:
	StackAr(const int &_size = 10);
	~StackAr();

	void push( const Object &x);
	Object pop();
	Object top() const;
	inline bool isEmpty()const{return topo == 0;}
	inline void makeEmpty(){topo = 0;}
	void print()
	{
		for (int i = 0; i < topo; ++i)
		{
			std::cout << vetor[i] << " ";
		}
	}
private:
	Object *vetor;
	int topo;
	int capacidade;
	
	void resize(){
	 	capacidade = 2*capacidade +1;
         	Object *pt = new Object[capacidade];
         	for ( auto i(0); i< capacidade ; i++){
            		pt[i] = vetor[i];
         	}
         	delete [] vetor; 
         	vetor = pt;
	}

};
#include "stackar.inl"

#endif
