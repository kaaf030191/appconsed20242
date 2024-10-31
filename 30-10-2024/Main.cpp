#include <iostream>

#include "Matrix.cpp"

int main() {
	Matrix matrix(3);

	matrix.insertData();

	std::cout << std::endl << std::endl;

	matrix.showData();

	return 0;
}