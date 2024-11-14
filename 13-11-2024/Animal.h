#include <iostream>

class Animal {
	public:
		std::string code;
		std::string type;
		std::string fullName;

		Animal() {}

		void insert();
		void show();
		bool compareByUniqueData(std::string code);
};