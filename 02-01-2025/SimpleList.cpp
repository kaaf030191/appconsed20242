#ifndef CLASSCPP_SIMPLE_LIST
#define CLASSCPP_SIMPLE_LIST

#include <iostream>

#include "SimpleList.h"
#include "Node.h"

void SimpleList::addQueue(int element) {
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

void SimpleList::removeQueue() {
	Node *currentNode = head;

	if(currentNode != nullptr) {
		if(currentNode->next != nullptr) {
			head = currentNode->next;
		} else {
			head = nullptr;
		}

		delete currentNode;
	}
}

void SimpleList::addStack(int element) {
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

void SimpleList::removeStack() {
	Node *currentNode = head;

	if(currentNode != nullptr) {
		while(currentNode->next != nullptr && currentNode->next->next != nullptr) {
			currentNode = currentNode->next;
		}

		if(currentNode->next != nullptr) {
			Node *tempNode = currentNode->next;

			currentNode->next = nullptr;

			delete tempNode;

			return;
		}

		Node *tempNode = currentNode;

		currentNode = nullptr;

		delete tempNode;
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
	}
}

void SimpleList::showInvertElements(Node *node) {
	if(node == nullptr) {
		std::cout << "No existen elementos en la lista.";

		return;
	}

	if(node->next != nullptr) {
		showInvertElements(node->next);
	}

	std::cout << node->element << " -> ";
}

#endif