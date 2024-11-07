#ifndef MYARRAY_CLASS
#define MYARRAY_CLASS

#include <iostream>

#include "MyArray.h"

template <typename T> void MyArray<T>::insertData() {
	for(unsigned int i = 0; i < elementNumber; i++) {
		std::cout << "Vector[" << i << "]: ";
		std::cin >> elementArray[i];
	}
}

template <typename T> void MyArray<T>::showData() {
	std::cout << std::endl;

	for(unsigned int i = 0; i < elementNumber; i++) {
		std::cout << "Vector[" << i << "] = " << elementArray[i] << std::endl;
	}
}

#endif