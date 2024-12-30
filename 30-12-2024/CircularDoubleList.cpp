#ifndef CLASSCPP_CIRCULAR_DOUBLE_LIST
#define CLASSCPP_CIRCULAR_DOUBLE_LIST

#include <iostream>

#include "CircularDoubleList.h"
#include "Node.h"

void CircularDoubleList::addElement(int element) {
	Node *node = new Node(element);

	Node *currentNode = head;

	if(currentNode == nullptr) {
		head = node;
		head->next = head;
		head->before = head;
	} else {
		currentNode = currentNode->before;

		currentNode->next = node;
		node->next = head;
		node->before = currentNode;
		head->before = node;
	}
}

#endif