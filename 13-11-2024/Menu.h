#include <iostream>

class Menu {
	public:
		int optionSelected = 0;
		std::string optionSelectedTemp = "0";

		Menu() {}

		void showMenu();
};