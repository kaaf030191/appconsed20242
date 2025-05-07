#include <windows.h>
#include <iostream>

#include "Menu.cpp"
#include "Business.cpp"

int main() {
	SetConsoleOutputCP(CP_UTF8);

	Business business;
	Menu menu;

	for(;;) {
		system("cls");

		switch(menu.optionsMenu()) {
			case 0: return 0;

			case 1:
				business.importFile();

			break;

			case 2:
				business.showTree(business.tree.root);

			break;

			case 3:
				business.testAutoComplete(business.tree.root);

			break;
		}

		std::cout << std::endl << std::endl;
		system("pause");
	}

	return 0;
}