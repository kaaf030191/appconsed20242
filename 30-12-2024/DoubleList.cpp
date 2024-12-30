#ifndef CLASSCPP_DOUBLE_LIST
#define CLASSCPP_DOUBLE_LIST

#include <iostream>

#include "DoubleList.h"
#include "Node.h"

void DoubleList::addElement(int element) {
	Node *node = new Node(element);

	Node *currentNode = head;

	if(currentNode == nullptr) {
		head = node;
	} else {
		while(currentNode->next != nullptr) {
			currentNode = currentNode->next;
		}

		currentNode->next = node;
		node->before = currentNode;
	}
}

#endif