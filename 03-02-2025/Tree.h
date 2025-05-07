#ifndef CLASS_TREE_H
#define CLASS_TREE_H

#include "Node.cpp"

class Tree {
	public:
		Node *root = nullptr;

		Tree() {
			this->root = new Node('.');
		}
};

#endif