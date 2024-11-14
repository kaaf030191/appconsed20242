#include <iostream>

#include "Menu.cpp"
#include "Storage.cpp"
#include "Person.cpp"
#include "Animal.cpp"

int main() {
	Menu menu;
	Storage<Person> storagePerson;
	Storage<Animal> storageAnimal;

	std::string classUniqueData;
	bool moveElement;

	while(menu.optionSelected != 7) {
		menu.showMenu();

		switch(menu.optionSelected) {
			case 1:
				storagePerson.array[storagePerson.elementNumber].insert();
				storagePerson.elementNumber++;

				break;

			case 2:
				for(int unsigned i = 0; i < storagePerson.elementNumber; i++) {
					storagePerson.array[i].show();
				}

				break;

			case 3:
				moveElement = false;

				std::cout << "Ingrese identificador del registro que desea eliminar: ";
				getline(std::cin, classUniqueData);

				for(int unsigned i = 0; i < storagePerson.elementNumber; i++) {
					if(!moveElement && storagePerson.array[i].compareByUniqueData(classUniqueData)) {
						moveElement = true;
					}

					if(moveElement && i < (sizeof(storagePerson.array)/sizeof(storagePerson.array[0]) - 1)) {
						storagePerson.array[i] = storagePerson.array[i + 1];
					}
				}

				if(moveElement) {
					storagePerson.elementNumber--;
				} else {
					std::cout << std::endl;
					std::cout << "El identificador ingresado no existe.";
					std::cout << std::endl;
				}

				break;
			
			case 4:
				storageAnimal.array[storageAnimal.elementNumber].insert();
				storageAnimal.elementNumber++;

				break;

			case 5:
				for(int unsigned i = 0; i < storageAnimal.elementNumber; i++) {
					storageAnimal.array[i].show();
				}

				break;

			case 6:
				moveElement = false;

				std::cout << "Ingrese identificador del registro que desea eliminar: ";
				getline(std::cin, classUniqueData);

				for(int unsigned i = 0; i < storageAnimal.elementNumber; i++) {
					if(!moveElement && storageAnimal.array[i].compareByUniqueData(classUniqueData)) {
						moveElement = true;
					}

					if(moveElement && i < (sizeof(storageAnimal.array)/sizeof(storageAnimal.array[0]) - 1)) {
						storageAnimal.array[i] = storageAnimal.array[i + 1];
					}
				}

				if(moveElement) {
					storageAnimal.elementNumber--;
				} else {
					std::cout << std::endl;
					std::cout << "El identificador ingresado no existe.";
					std::cout << std::endl;
				}

				break;

			case 7:
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