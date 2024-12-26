#ifndef CLASSCPP_SIMPLE_LIST
#define CLASSCPP_SIMPLE_LIST

#include <iostream>

#include "SimpleList.h"
#include "Node.h"

void SimpleList::addElement(int element) {
	Node *node = new Node(element);

	Node *currentNode = head;

	if(currentNode == nullptr) {
		head = node;
	} else {
		while(currentNode->next != nullptr) {
			currentNode = currentNode->next;
		}

		currentNode->next = node;
	}
}

void SimpleList::showElements() {
	Node *currentNode = head;

	if(currentNode == nullptr) {
		std::cout << "No existen elementos en la lista.";
	} else {
		while(currentNode != nullptr) {
			std::cout << currentNode->element << " -> ";

			currentNode = currentNode->next;
		}

		std::cout << "nullptr";
	}
}

#endif