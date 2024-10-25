#include <iostream>

#include "Helper.cpp"

int main() {
	int arrayNumber[] = { 1, 3, 4, 7, 8, 10, 14, 16, 20 };
	int elementQuantity = sizeof(arrayNumber) / sizeof(arrayNumber[0]);
	int valueToSearch;
	int elementPosition;

	std::cout << "Ingrese el número que desea buscar: ";
	std::cin >> valueToSearch;

	std::cout << std::endl;

	Helper helper;

	elementPosition = helper.linealSearch(arrayNumber, elementQuantity, valueToSearch);

	if(elementPosition == -1) {
		std::cout << "[BL] No se encontró el elemento buscado.";
	} else {
		std::cout << "[BL] Se encontró el valor buscado, en la posición Nro. " << elementPosition << ".";
	}

	std::cout << std::endl << std::endl;

	elementPosition = helper.binarySearch(arrayNumber, 0, elementQuantity, valueToSearch);

	if(elementPosition == -1) {
		std::cout << "[BB] No se encontró el elemento buscado.";
	} else {
		std::cout << "[BB] Se encontró el valor buscado, en la posición Nro. " << elementPosition << ".";
	}
}