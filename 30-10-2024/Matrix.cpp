#include <iostream>
#include <regex>
#include <string>

#include "Matrix.h"

void Matrix::insertData() {
	std::cout << "Ingrese los valores de la matriz." << std::endl << std::endl;

	std::regex pattern("^[0-9]+$");

	for(unsigned int i = 0; i < matrixSize; i++) {
		for(unsigned int j = 0; j < matrixSize; j++) {
			std::string tempData;

			std::cout << "Matriz[" << i << "][" << j <<"]: ";
			getline(std::cin, tempData);

			while(!std::regex_match(tempData, pattern)) {
				std::cout << "Valor incorrecto. Ingrese un valor entero positivo." << std::endl;

				std::cout << "Matriz[" << i << "][" << j <<"]: ";
				getline(std::cin, tempData);
			}

			matrix[i][j] = std::stoi(tempData);
		}

		std::cout << std::endl;
	}
}

void Matrix::showData() {
	std::cout << "La matriz actual es:" << std::endl << std::endl;

	for(unsigned int i = 0; i < matrixSize; i++) {
		for(unsigned int j = 0; j < matrixSize; j++) {
			std::cout << matrix[i][j] << "\t";
		}

		std::cout << std::endl;
	}
}