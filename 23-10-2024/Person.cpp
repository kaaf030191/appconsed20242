#include <iostream>

#include "Person.h"

void Person::showData() {
	std::cout << this->firstName << " " << this->surName << std::endl;
}