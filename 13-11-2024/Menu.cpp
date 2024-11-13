#ifndef MENU_CLASS
#define MENU_CLASS

#include <iostream>
#include <string>

#include "Menu.h"

void Menu::showMenu() {
	system("cls");

	std::cout << "=================MENÚ=================" << std::endl;
	std::cout << "1. Registrar un elemento." << std::endl;
	std::cout << "2. Listar todos los elementos." << std::endl;
	std::cout << "3. Eliminar un elemento." << std::endl;
	std::cout << "4. Salir." << std::endl;

	std::cout << std::endl;

	std::cout << "Ingrese una opción: ";

	getline(std::cin, this->optionSelectedTemp);

	this->optionSelected = stoi(this->optionSelectedTemp);

	std::cout << std::endl;
}

#endif