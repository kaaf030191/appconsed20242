#ifndef MENU_CLASS
#define MENU_CLASS

#include <iostream>
#include <string>

#include "Menu.h"

void Menu::showMenu() {
	system("cls");

	std::cout << "=================MENÚ=================" << std::endl;
	std::cout << "1. Registrar persona." << std::endl;
	std::cout << "2. Listar personas." << std::endl;
	std::cout << "3. Eliminar personas." << std::endl;
	std::cout << "4. Registrar animal." << std::endl;
	std::cout << "5. Listar animales." << std::endl;
	std::cout << "6. Eliminar animal." << std::endl;
	std::cout << "7. Salir." << std::endl;

	std::cout << std::endl;

	std::cout << "Ingrese una opción: ";

	getline(std::cin, this->optionSelectedTemp);

	this->optionSelected = stoi(this->optionSelectedTemp);

	std::cout << std::endl;
}

#endif