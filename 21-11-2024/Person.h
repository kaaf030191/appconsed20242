#include "StructPerson.h"

class Person {
	public:
		StructPerson structPerson[1000];
		int elementNumber = 0;

		Person() {}

		void insert();
		void showAll();
		void showAllDescLoop();
		void showAllDescRecursive(int registerQuantity);
};