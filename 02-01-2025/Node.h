#ifndef CLASSH_NODE
#define CLASSH_NODE

#include <iostream>

class Node {
	public:
		int element;
		Node *next = nullptr;

		Node(int item): element(item) {}
};

#endif