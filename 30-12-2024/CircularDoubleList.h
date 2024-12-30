#ifndef CLASSH_CIRCULAR_DOUBLE_LIST
#define CLASSH_CIRCULAR_DOUBLE_LIST

#include <iostream>

#include "Node.h"

class CircularDoubleList {
	public:
		Node *head = nullptr;

		void addElement(int element);
};

#endif