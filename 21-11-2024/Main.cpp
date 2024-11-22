#include <iostream>
#include <string>

#include "Person.cpp"

int main() {
	Person person;

	person.insert();

	std::cout << std::endl;

	person.insert();

	std::cout << std::endl;

	person.showAll();

	std::cout << std::endl;

	person.showAllDescLoop();

	std::cout << std::endl;

	person.showAllDescRecursive(person.elementNumber);

	return 0;
}