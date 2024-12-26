#include <iostream>

#include "SimpleList.cpp"

int main() {
	SimpleList simpleList;

	simpleList.addElement(7);
	simpleList.addElement(5);
	simpleList.addElement(10);

	simpleList.showElements();

	return 0;
}