/*
 * queuear.h
 *
 * Created on 15/04/2016
 */
/**
 *
 * @author Adelino Afonso
 */

#ifndef _QUEUEAR_H 
#define _QUEUEAR_H 
#include <iostream>
#include "AbsQueue.h"
	using namespace std;
template <class Object>
class QueueAr : public AbsQueue<Object>
{
public:
	QueueAr(const int &_size = 1);
	~QueueAr();

	void enqueue( const Object & x ); 
	Object dequeue( );
	Object getFront( ) const;
	bool isEmpty( ) const; 
	void makeEmpty( );

	void print()
	{
		for (int i = guarda; i <= retaguarda; ++i)
		{
			std::cout << vetor[i] << std::endl;
		}
	}

private:
	Object *vetor;
	int guarda;
	int retaguarda;
	int capacidade;

	void resize(){

		Object* aux = new Object[capacidade * 2];

		auto j(capacidade * 2 - 1);

		for( int i = capacidade - 1; i >= guarda; i--){
			aux[j] = vetor[i];
			j--;
		}

		guarda = j + 1;
		
		auto copia_gua(guarda);

		memcpy( aux, vetor, sizeof(Object) * copia_gua );

		delete [] vetor; //liberar espaço
		capacidade = capacidade * 2;
		vetor = aux;
	}

	void dobra(){

		Object* aux = new Object[capacidade * 2];

		memcpy( aux, vetor, sizeof(Object) * capacidade );

		delete [] vetor;//liberar espaço

		capacidade = capacidade * 2;

		vetor = aux;
	}
	
};

#include "queuear.inl"
#endif