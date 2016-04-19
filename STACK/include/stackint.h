#ifndef _STACKINT_H_
#define _STACKINT_H_

#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error

class stackInt
{
public:
	stackInt(int _size = 10);
	~stackInt();

	void push(int);
	int pop(void);
	int top(void) const;
	inline bool empty(void)const{return topo == 0;}
	inline void clear(void){topo = 0;}
	void print()
	{
		for (int i = 0; i < topo; ++i)
		{
			std::cout << vetor[i];
		}
	}
private:
	int *vetor;
	int topo;
	int capacidade;
	
	void resize(int _capacidade){
	capacidade = 2 * _capacidade;
	}

};
#endif