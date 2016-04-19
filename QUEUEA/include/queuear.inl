/*
 * queuear.inl
 *
 * Created on 15/04/2016
 */

/**
 *
 * @author Adelino Afonso
 */

#include <iostream>       // std::cerr
#include <stdexcept>      // std::length_error
#include "queuear.h"

template <class Object>
	QueueAr<Object>::QueueAr(const int &_size):guarda(-1), retaguarda(-1), capacidade(_size){
		vetor = new Object[capacidade];
	}

template <class Object>
	QueueAr<Object>::~QueueAr(){
			delete[] vetor;
	}

template <class Object>
	void QueueAr<Object>::enqueue(const Object &_value){
		int posicao = (retaguarda + 1)% capacidade;
		if (guarda == -1 && retaguarda == -1)
		{
			guarda++;
			retaguarda++;
			vetor[guarda] = _value;
		}else{
			if (retaguarda < guarda && posicao == guarda )
			{
				resize();
			}else if ((retaguarda + 1 == capacidade) && (posicao >= guarda))
			{
				posicao = capacidade;
				dobra();
			}
			vetor[posicao] = _value;
			retaguarda = posicao;
		}
	} 

template <class Object>
	Object QueueAr<Object>::dequeue( ){
		Object aux = vetor[retaguarda];
		guarda = (guarda+1)%capacidade;
		return  aux;
	}

template <class Object>
	Object QueueAr<Object>::getFront( ) const{
		return vetor[guarda];
	}

template <class Object>
	bool QueueAr<Object>::isEmpty( ) const{
		return guarda == -1;
	}


template <class Object>
	void QueueAr<Object>::makeEmpty( ){
		guarda = retaguarda = -1;
	}

