#ifndef CLASSH_SIMPLE_LIST
#define CLASSH_SIMPLE_LIST

#include <iostream>

#include "Node.h"

class SimpleList {
	public:
		Node *head = nullptr;

		void addQueue(int element);
		void removeQueue();
		void addStack(int element);
		void removeStack();
		void showElements();
		void showInvertElements(Node *node);
};

#endif