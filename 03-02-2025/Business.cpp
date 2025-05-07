#ifndef CLASS_BUSINESS_CPP
#define CLASS_BUSINESS_CPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

#include "Business.h"
#include "Node.cpp"

void Business::importFile() {
	tree.root = new Node('.');

	std::string filePath = "";
	std::string line = "";

	std::cout << "Ingrese ruta del archivo a importar: ";
	getline(std::cin, filePath);

	std::ifstream file(filePath);

	if(!file) {
		std::cout << "No se pudo abrir el archivo o no existe.";

		return;
	}

	while(getline(file, line)) {
		unsigned int lettersQuantity = line.length();

		Node *currentNode = tree.root->listNode.head;
		List<Node> *currentList = &tree.root->listNode;

		for(unsigned int i = 0; i < lettersQuantity; i++) {
			char letter = std::toupper(line[i]);

			if(tree.root->listNode.head == nullptr) {
				tree.root->listNode.head = new Node(letter);
				currentNode = tree.root->listNode.head->listNode.head;
				currentList = &tree.root->listNode.head->listNode;
			} else {
				if(currentNode == nullptr) {
					currentList->add(letter);

					Node *tempNode = currentList->head;

					while(tempNode->next != nullptr) {
						tempNode = tempNode->next;
					}

					currentList = &tempNode->listNode;
					currentNode = currentList->head;

					continue;
				}

				bool isContinue = false;

				while(currentNode != nullptr) {
					if((currentNode->listNode.head != nullptr && currentNode->element == letter && lettersQuantity > (i + 1)) || currentNode->listNode.head == nullptr && currentNode->element == letter && lettersQuantity == (i + 1)) {
						currentList = &currentNode->listNode;
						currentNode = currentNode->listNode.head;

						isContinue = true;

						break;
					}

					if(currentNode->element == letter && lettersQuantity > (i + 1) && currentNode->next == nullptr) {
						currentList->add(letter);

						Node *tempNode = currentList->head;

						while(tempNode->next != nullptr) {
							tempNode = tempNode->next;
						}

						currentList = &tempNode->listNode;
						currentNode = currentList->head;

						isContinue = true;

						break;
					}

					currentNode = currentNode->next;
				}

				if(isContinue) { continue; }

				currentList->add(letter);

				Node *tempNode = currentList->head;

				while(tempNode->next != nullptr) {
					tempNode = tempNode->next;
				}

				currentList = &tempNode->listNode;
				currentNode = currentList->head;
			}
		}
	}

	file.close();
}

void Business::showTree(Node *root, unsigned int level = 0) {
	unsigned int lvl = level;

	if(root != nullptr) {
		for(unsigned int i = 0; i < lvl * 2; i++) {
			std::cout << ((i % 2 == 0) ? "|" : "-");
		}

		std::cout << root->element << std::endl;

		lvl++;

		this->showTree(root->listNode.head, lvl);
		this->showTree(root->next, level);
	}
}

void Business::testAutoComplete(Node *root, bool first = true, std::string world = "", unsigned int iterator = 0, std::string rootPath = "") {
	std::string localWorld = world;

	if(root != nullptr) {
		if(first) {
			std::cout << "Ingrese palabra: ";
			getline(std::cin, localWorld);

			std::transform(localWorld.begin(), localWorld.end(), localWorld.begin(), [](unsigned char c) {
				return std::toupper(c);
			});

			root = root->listNode.head;

			if(root == nullptr) {
				return;
			}

			first = false;
		}

		if(localWorld[iterator] == root->element || localWorld.length() <= iterator) {
			std::cout << root->element;

			this->testAutoComplete(root->listNode.head, false, localWorld, iterator + 1, rootPath + root->element);

			if(root->next != nullptr && (localWorld[iterator] == root->next->element || localWorld.length() <= iterator)) {
				std::cout << std::endl << rootPath;
			}
		}

		this->testAutoComplete(root->next, false, localWorld, iterator, rootPath);
	}
}

#endif