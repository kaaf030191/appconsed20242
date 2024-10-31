#include <iostream>

class Matrix {
	public:
		unsigned int matrix[100][100];
		int matrixSize;

		Matrix() {}
		Matrix(int ms) : matrixSize(ms) {}

		void insertData();
		void showData();
};