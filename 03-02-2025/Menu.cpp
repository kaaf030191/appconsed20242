#ifndef CLASS_MENU_CPP
#define CLASS_MENU_CPP

#include <iostream>
#include <string>

#include "Menu.h"

bool Menu::existsOption(std::string option) {
	std::string options[] = { "0", "1", "2", "3" };

	for(std::string item: options) {
		if(option == item) {
			return true;
		}
	}

	return false;
}

int Menu::optionsMenu() {
	std::cout << "===============MENÚ===============" << std::endl;
	std::cout << "1. Importar archivo con palabras." << std::endl;
	std::cout << "2. Mostrar árbol generado." << std::endl;
	std::cout << "3. Probar autocompletado." << std::endl;
	std::cout << "0. Salir." << std::endl << std::endl;

	std::string optionSelected = "";

	while(!existsOption(optionSelected)) {
		std::cout << "Ingrese opción deseada: ";
		getline(std::cin, optionSelected);
	}

	std::cout << std::endl;

	return std::stoi(optionSelected);
}

#endif