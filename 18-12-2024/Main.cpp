#include <iostream>

int main() {
	/*Ejemplo de punteros simples*/
	// int x = 7;
	// int *y = &x;

	// std::cout << x << std::endl;
	// std::cout << *y << std::endl;

	// x = 10;

	// std::cout << *y << std::endl;

	// *y = 15;

	// std::cout << x << std::endl;

	/*Ejemplo de punteros dobles*/
	// int x = 7;
	// int *y = &x;
	// int **z = &y;
	// int *k = &x;
	// int ***o = &z;

	// *y = 10;

	// std::cout << **z << std::endl;

	// **z = 5;

	// std::cout << x << std::endl;

	// *k = 20;

	// std::cout << x << " - " << *y << " - " << **z << " - " << *k << std::endl;

	// x = 100;

	// std::cout << x << " - " << *y << " - " << **z << " - " << *k << " - " << ***o << std::endl;

	/*Ejemplo de punteros y vectores*/
	// int v[] = {10, 20, 30, 40, 50};
	// int *p = &v[0];

	// std::cout << v[2] << std::endl;
	// std::cout << p[2] << std::endl;
	// std::cout << *(p + 2) << std::endl;
	// std::cout << *p << std::endl;

	// p += 3;

	// std::cout << *p << std::endl;

	// p -= 2;

	// std::cout << *p << std::endl;

	// p -= 1;

	// std::cout << *p << std::endl;

	// std::cout << std::endl;

	// for(int unsigned i = 0; i < (sizeof(v)/sizeof(v[0])); i++) {
	// 	std::cout << *(p + i) << "\t";
	// }

	// delete[] p;

	int n;

	std::cout << "Ingrese el número de elementos: ";
	std::cin >> n;

	int *p = nullptr;

	p = new int[n];

	for (int unsigned i = 0; i < n; i++) {
		std::cout << "Ingrese el valor del número " << (i + 1) << ": ";
		std::cin >> *(p + i);
	}

	int addElement = 0;

	for (int unsigned i = 0; i < n; i++) {
		addElement += *(p + i);
	}

	std::cout << "La suma total de los elementos es: " << addElement;

	delete[] p;

	return 0;
}