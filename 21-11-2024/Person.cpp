#ifndef CLASS_PERSON
#define CLASS_PERSON

#include <iostream>
#include <string>

#include "Person.h"

void Person::insert() {
	std::cout << "Ingrese nombre: ";
	getline(std::cin, structPerson[elementNumber].firstName);

	std::cout << "Ingrese apellido: ";
	getline(std::cin, structPerson[elementNumber].surName);

	std::cout << "Ingrese DNI: ";
	getline(std::cin, structPerson[elementNumber].dni);

	elementNumber++;
}

void Person::showAll() {
	for(unsigned int i = 0; i < elementNumber; i++) {
		std::cout << "Datos de persona: " << "[" << structPerson[i].dni << "] "<< structPerson[i].firstName << " " << structPerson[i].surName << std::endl;
	}
}

void Person::showAllDescLoop() {
	for(int i = (elementNumber - 1); i >= 0; i--) {
		std::cout << "Datos de persona: " << "[" << structPerson[i].dni << "] "<< structPerson[i].firstName << " " << structPerson[i].surName << std::endl;
	}
}

void Person::showAllDescRecursive(int registerQuantity) {
	if(registerQuantity == 0) {
		return;
	}

	std::cout << "Datos de persona: " << "[" << structPerson[registerQuantity - 1].dni << "] "<< structPerson[registerQuantity - 1].firstName << " " << structPerson[registerQuantity - 1].surName << std::endl;

	showAllDescRecursive(registerQuantity - 1);
}

#endif