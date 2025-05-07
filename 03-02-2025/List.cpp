#ifndef CLASS_LIST_CPP
#define CLASS_LIST_CPP

#include "List.h"

template <typename T> void List<T>::add(char element) {
	T *newNode = new T(element);

	if(this->head == nullptr) {
		this->head = newNode;

		return;
	}

	T *tempNode = this->head;

	while(tempNode->next != nullptr) {
		tempNode = tempNode->next;
		std::cout << ".";
	}

	tempNode->next = newNode;
}

#endif