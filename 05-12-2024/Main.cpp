#include <iostream>

bool isCousin(int number) {
	if (number <= 1) {
		return false;
	}

	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int matrix[2][2][2][2][2] = {
		{
			{{{45, 12}, {78, 34}}, {{90, 56}, {23, 67}}},
			{{{89, 11}, {47, 39}}, {{50, 72}, {18, 63}}}
		},
		{
			{{{29, 82}, {91, 46}}, {{14, 77}, {35, 88}}},
			{{{66, 25}, {41, 33}}, {{54, 99}, {21, 69}}}
		}
	};

	int addEvens = 0;
	int oddSum = 0;
	int cousinQuantity = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				for (int l = 0; l < 2; l++) {
					for (int m = 0; m < 2; m++) {
						if((matrix[i][j][k][l][m] % 2) == 0) {
							addEvens += matrix[i][j][k][l][m];
						} else {
							oddSum += matrix[i][j][k][l][m];
						}

						if(isCousin(matrix[i][j][k][l][m])) {
							cousinQuantity++;
						}
					}
				}
			}
		}
	}

	std::cout << "La suma resultante de los números pares es\t: " << addEvens << std::endl;
	std::cout << "La suma resultante de los números impares es\t: " << oddSum << std::endl;
	std::cout << "La cantidad de números primos es\t\t: " << cousinQuantity << std::endl;

	return 0;
}