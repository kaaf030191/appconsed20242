#ifndef CLASSH_DOUBLE_LIST
#define CLASSH_DOUBLE_LIST

#include <iostream>

#include "Node.h"

class DoubleList {
	public:
		Node *head = nullptr;

		void addElement(int element);
};

#endif