#include <iostream>

#include "SimpleList.cpp"

int main() {
	SimpleList simpleList;

	/*simpleList.addQueue(7);
	simpleList.addQueue(5);
	simpleList.addQueue(10);

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.addQueue(11);

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.removeQueue();

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.removeQueue();

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;*/

	simpleList.addStack(1);
	simpleList.addStack(2);
	simpleList.addStack(3);
	simpleList.addStack(4);
	simpleList.addStack(5);
	simpleList.addStack(6);
	simpleList.addStack(7);

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.removeStack();

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.addStack(10);

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	simpleList.removeStack();

	simpleList.showInvertElements(simpleList.head);
	std::cout << std::endl;

	return 0;
}