#include <iostream>

#include "Bst.cpp"

int main() {
	Bst<int> tree;
	
	tree.insert(10);
	tree.insert(10);
	tree.insert(3);
	tree.insert(3);
	tree.insert(4);
	tree.insert(5);

	std::cout << std::endl;

	std::cout << "inorder: \t\t\t";
	tree.inorder();
	std::cout << std::endl;

	std::cout << "postorder: \t\t\t";
	tree.postorder();
	std::cout << std::endl;

	std::cout << "preorder: \t\t\t";
	tree.preorder();
	std::cout << std::endl;

	std::cout << "iterativeInorder: \t\t";
	tree.iterativeInorder();
	std::cout << std::endl;

	std::cout << "iterativePostorder: \t\t";
	tree.iterativePostorder();
	std::cout << std::endl;

	std::cout << "iterativePreorder: \t\t";
	tree.iterativePreorder();
	std::cout << std::endl;

	std::cout << "breadthFirst: \t\t\t";
	tree.breadthFirst();
	std::cout << std::endl;

	return 0;
}