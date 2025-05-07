#ifndef CLASS_NODE_H
#define CLASS_NODE_H

#include "List.cpp"

class Node {
	public:
		char element;

		Node *next = nullptr;
		List<Node> listNode;

		Node(char el) : element(el) {}
};

#endif