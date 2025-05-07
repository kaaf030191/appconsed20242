#ifndef CLASS_BUSINESS_H
#define CLASS_BUSINESS_H

#include "Tree.cpp"

class Business {
	public:
		Tree tree;

		void importFile();
		void showTree(Node *root, unsigned int level);
		void testAutoComplete(Node *root, bool first, std::string world, unsigned int iterator, std::string rootPath);
};

#endif