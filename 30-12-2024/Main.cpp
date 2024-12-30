#include <iostream>

#include "DoubleList.cpp"
#include "CircularDoubleList.cpp"

int main() {
	std::cout << "LISTAS DOBLEMENTE ENLAZADAS." << std::endl << std::endl;

	DoubleList doubleList;

	doubleList.addElement(7);
	doubleList.addElement(5);
	doubleList.addElement(10);

	Node *currentDoubleNode = doubleList.head;

	std::cout << currentDoubleNode->element << std::endl;
	currentDoubleNode = currentDoubleNode->next;
	std::cout << currentDoubleNode->element << std::endl;
	currentDoubleNode = currentDoubleNode->next;
	std::cout << currentDoubleNode->element << std::endl;

	currentDoubleNode = currentDoubleNode->before;
	std::cout << currentDoubleNode->element << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "LISTAS CIRCULARES DOBLEMENTE ENLAZADAS." << std::endl << std::endl;

	CircularDoubleList circularDoubleList;

	circularDoubleList.addElement(7);
	circularDoubleList.addElement(5);
	circularDoubleList.addElement(10);

	Node *currentCircularDoubleNode = circularDoubleList.head;

	std::cout << currentCircularDoubleNode->element << std::endl;
	currentCircularDoubleNode = currentCircularDoubleNode->next;
	std::cout << currentCircularDoubleNode->element << std::endl;
	currentCircularDoubleNode = currentCircularDoubleNode->next;
	std::cout << currentCircularDoubleNode->element << std::endl;

	currentCircularDoubleNode = currentCircularDoubleNode->before;
	std::cout << currentCircularDoubleNode->element << std::endl;

	return 0;
}