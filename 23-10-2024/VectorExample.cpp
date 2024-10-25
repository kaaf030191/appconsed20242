#include <iostream>

int main() {
	int arrayNumber[5];
	int temporalNumber;
	bool initTemporalNumber = false;

	for(int i = 0; i < 5; i++) {
		std::cout << "Ingrese el valor del elemento Nro. " << (i + 1) << ": ";
		std::cin >>  arrayNumber[i];
	}

	std::cout << std::endl;

	for(int i = 0; i < 5; i++) {
		if(!initTemporalNumber || arrayNumber[i] > temporalNumber) {
			temporalNumber = arrayNumber[i];

			initTemporalNumber = true;
		}
	}

	std::cout << "El valor mayor encontrado en el vector es: " << temporalNumber;

	return 0;
}