#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>
#include <string>

#include "Animal.h"

void Animal::insert() {
	std::cout << "Ingrese el código del animal: ";
	getline(std::cin, this->code);
	std::cout << "Ingrese la especie del animal: ";
	getline(std::cin, this->type);
	std::cout << "Ingrese nombre del animal: ";
	getline(std::cin, this->fullName);
}

void Animal::show() {
	std::cout << "====================================================" << std::endl;
	std::cout << "Código\t\t: " << this->code << std::endl;
	std::cout << "Especie\t\t: " << this->type << std::endl;
	std::cout << "Nombre completo\t: " << this->fullName << std::endl;
}

bool Animal::compareByUniqueData(std::string code) {
	return this->code == code;
}

#endif