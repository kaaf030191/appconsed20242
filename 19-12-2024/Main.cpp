#include <iostream>

int main() {
	//delete ptr; #para punteros que apunte a una variable simple
	//delete[] ptr; #para punteros que a variables creadas con la palabra reservada "new"
	//free(...); #para punteros que reserven memoria sin uso de la palabra reservada "new" (por ejemplo, con malloc)

	int **matrix = nullptr;

	matrix = (int**) malloc(7 * sizeof(int*));

	for(int unsigned i = 0; i < 7; i++) {
		matrix[i] = (int*) malloc(2 * sizeof(int));
	}

	int value = 1;

	for(int unsigned i = 0; i < 7; i++) {
		for(int unsigned j = 0; j < 2; j++) {
			matrix[i][j] = value;

			value++;
		}
	}

	for(int unsigned i = 0; i < 7; i++) {
		for(int unsigned j = 0; j < 2; j++) {
			std::cout << matrix[i][j] << "\t";
		}

		std::cout << std::endl;
	}

	for(int unsigned i = 0; i < 7; i++) {
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}