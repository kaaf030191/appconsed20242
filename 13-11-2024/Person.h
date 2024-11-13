#include <iostream>

class Person {
	public:
		std::string dni;
		std::string firstName;
		std::string surName;

		Person() {}

		void insert();
		void show();
		bool findByDni(std::string dni);
};