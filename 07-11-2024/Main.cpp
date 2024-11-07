#include <iostream>

#include "MyArray.cpp"

// #include <typeinfo>

// template <typename T> void add(T x, T y) {
// 	if(((std::string)typeid(x).name() == "f" || (std::string)typeid(x).name() == "i")
// 		&& ((std::string)typeid(y).name() == "f" || (std::string)typeid(y).name() == "i")
// 	) {
// 		std::cout << "La operación de suma es: " << (x + y) << std::endl;
// 	} else {
// 		std::cout << "Los datos concatenados son: " << x << "_" << y << std::endl;
// 	}
// }

int main() {
	// float numberOneFloat = 7.8;
	// float numberTwoFloat = 5;

	// add<float>(numberOneFloat, numberTwoFloat);

	// int numberOneInt = 7;
	// int numberTwoInt = 5;

	// add<int>(numberOneInt, numberTwoInt);

	// std::string firstName = "Kevin Arnold";
	// std::string surName = "Arias Figueroa";

	// add<std::string>(firstName, surName);

	// char characterOne = 'K';
	// char characterTwo = 'A';

	// add<char>(characterOne, characterTwo);

	MyArray<std::string> myArrayInt(5);

	myArrayInt.insertData();
	myArrayInt.showData();
	
	return 0;
}