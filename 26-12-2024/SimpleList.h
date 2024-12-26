#ifndef CLASSH_SIMPLE_LIST
#define CLASSH_SIMPLE_LIST

#include <iostream>

#include "Node.h"

class SimpleList {
	public:
		Node *head = nullptr;

		void addElement(int element);
		void showElements();
};

#endif