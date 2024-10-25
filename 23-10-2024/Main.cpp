#include <iostream>
#include <string>

#include "Person.cpp"

int main() {
	Person person[2];

	for(unsigned int i = 0; i < 2; i++) {
		std::cout << "Ingrese el nombre de la persona Nro. " << (i + 1) << ": ";
		getline(std::cin, person[i].firstName);

		std::cout << "Ingrese el apellido de la persona Nro. " << (i + 1) << ": ";
		getline(std::cin, person[i].surName);

		std::cout << std::endl;
	}

	std::cout << std::endl;

	for(unsigned int i = 0; i < 2; i++) {
		person[i].showData();
	}

	return 0;
}