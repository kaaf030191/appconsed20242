#include <iostream>

#include "Menu.cpp"
#include "Storage.cpp"
#include "Person.cpp"

int main() {
	Menu menu;
	Storage<Person> storage;

	std::string dniTemp;
	bool moveElement;

	while(menu.optionSelected != 4) {
		menu.showMenu();

		switch(menu.optionSelected) {
			case 1:
				storage.array[storage.elementNumber].insert();
				storage.elementNumber++;

				break;

			case 2:
				for(int unsigned i = 0; i < storage.elementNumber; i++) {
					storage.array[i].show();
				}

				break;

			case 3:
				moveElement = false;

				std::cout << "Ingrese DNI de la persona que desea eliminar: ";
				getline(std::cin, dniTemp);

				for(int unsigned i = 0; i < storage.elementNumber; i++) {
					if(!moveElement && storage.array[i].findByDni(dniTemp)) {
						moveElement = true;
					}

					if(moveElement && i < (sizeof(storage.array)/sizeof(storage.array[0]) - 1)) {
						storage.array[i] = storage.array[i + 1];
					}
				}

				if(moveElement) {
					storage.elementNumber--;
				} else {
					std::cout << std::endl;
					std::cout << "El DNI ingresado, no existe.";
					std::cout << std::endl;
				}

				break;

			case 4:
				std::cout << "Gracias!!! Hasta pronto." << std::endl;

				break;

			default:
				std::cout << "Selecciona una opción correcta." << std::endl;

				break;
		}

		std::cout << std::endl;

		system("pause");
	}

	return 0;
}