#ifndef PERSON_CLASS
#define PERSON_CLASS

#include <iostream>
#include <string>

#include "Person.h"

void Person::insert() {
	std::cout << "Ingrese el DNI: ";
	getline(std::cin, this->dni);
	std::cout << "Ingrese el nombre: ";
	getline(std::cin, this->firstName);
	std::cout << "Ingrese el apellido: ";
	getline(std::cin, this->surName);
}

void Person::show() {
	std::cout << "====================================================" << std::endl;
	std::cout << "DNI\t\t: " << this->dni << std::endl;
	std::cout << "Nombre\t\t: " << this->firstName << std::endl;
	std::cout << "Apellido\t: " << this->surName << std::endl;
}

bool Person::findByDni(std::string dni) {
	return this->dni == dni;
}

#endif