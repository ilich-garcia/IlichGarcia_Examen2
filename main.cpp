// main.cpp

#include "Being.h"
#include "Fruit.h"
#include "Marine.h"
#include "Pirate.h"
#include "Revolutionary.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"
#include <vector>

int main(int argc, char const *argv[]) {
	vector<Being*> beings;
	vector<Fruit*> fruits;
	int option, beingsOption, fruitsOption;

	Fruit* fruit = new Fruit("Ciruela");
	fruits.push_back(fruit);
	beings.push_back(new Being("Aceituno", 2, 19, true, false, true, fruit));

	do {
		cout << "1) Seres. \n2) Frutas. \n3) Salir. \nOpción: ";
		cin >> option;

		if (option == 1) { // Seres.
			string name;
			int position, age, lookingHaki, armerHaki, kingHaki, hasFruit;
			bool hasLookingHaki, hasArmerHaki, hasKingHaki;

			cout << "Agregar: \n1) Marina. \n2) Piratas. \n3) Revolucionarios. \nOpción: ";
			cin >> beingsOption;

			cout << "Nombre: ";
			cin >> name;
			cout << "Posición de la raza: \n1) Gyojin. \n2) Kyojin. \n3) Ningyo. \n4) Humano. \n5) Mink. \n6) Skypieans. \nOpción: ";
			cin >> position;
			cout << "Edad: ";
			cin >> age;
			cout << "Tiene haki de observación? (1: Sí, 2: No): ";
			cin >> lookingHaki;
			cout << "Tiene haki de armadura? (1: Sí, 2: No): ";
			cin >> armerHaki;
			cout << "Tiene haki del rey? (1: Sí, 2: No): ";
			cin >> kingHaki;

			if (lookingHaki == 1) {
				hasLookingHaki = true;
			} else {
				hasLookingHaki = false;
			}

			if (armerHaki == 1) {
				hasArmerHaki = true;
			} else {
				hasArmerHaki = false;
			}

			if (kingHaki == 1) {
				hasKingHaki = true;
			} else {
				hasKingHaki = false;
			}

			if (beingsOption == 1) { // Agregando Marine.
				string date, name;
				int hasFruit, positionRange;

				cout << "Fecha: ";
				cin >> date;
				cout << "Posición del rango: \n1) Cadete. \n2) Teniente. \n3) Vice-almirante. \n4) Almirante. \n5) Almirante de flota. \nOpción: ";
				cin >> positionRange;
				cout << "Tiene fruta del diablo? (1: Sí, 2: No): ";
				cin >> hasFruit;

				if (hasFruit == 1) {
					int fruitPosition;

					for (int i = 0; i < fruits.size(); ++i) {
						cout << "Nombre: " << fruits.at(i) -> getName() << endl;
					}

					do {						
						cout << "Posición de la fruta a agregar: ";
						cin >> fruitPosition;
					} while (fruitPosition >= fruits.size());

					Fruit* fruit = fruits.at(fruitPosition);

					Marine* marine = new Marine(date, positionRange, name, position, age, haslookingHaki, hasarmerHaki, haskingHaki, fruit);
					beings.push_back(marine);
				} else {
					Marine* marine = new Marine(date, positionRange, name, position, age, haslookingHaki, hasarmerHaki, haskingHaki);
					beings.push_back(marine);
				}
			} else if (beingsOption == 2) { // Agregando Pirate.
				int positionOcean, hasFruit;
				string crew, function;

				cout << "Posición del océano: \n1) East. \n2) West. \n3) South. \n4) North blue. \n5) Grand line. \n6) New world. \nOpción: ";
				cin >> positionOcean;
				cout << "Tripulación: ";
				cin >> crew;
				cout << "Función: ";
				cin >> function;
				cout << "Tiene fruta del diablo? (1: Sí, 2: No): ";
				cin >> hasFruit;

				if (hasFruit == 1) {
					int fruitPosition;

					for (int i = 0; i < fruits.size(); ++i) {
						cout << "Nombre: " << fruits.at(i) -> getName() << endl;
					}

					do {						
						cout << "Posición de la fruta a agregar: ";
						cin >> fruitPosition;
					} while (fruitPosition >= fruits.size());

					Fruit* fruit = fruits.at(fruitPosition);

					Pirate* pirate = new Pirate(positionOcean, crew, function, name, position, age, haslookingHaki, hasarmerHaki, haskingHaki, fruit);
					beings.push_back(pirate);
				} else {
					Pirate* pirate = new Pirate(positionOcean, crew, function, name, position, age, haslookingHaki, hasarmerHaki, haskingHaki);
					beings.push_back(pirate);
				}
			} else if (beingsOption == 3) { // Agregando Revolutionary.
			}
		} else if (option == 2) { // Frutas.

		} else {
			option = 3;
		}
	} while (option != 3);

	return 0;
}