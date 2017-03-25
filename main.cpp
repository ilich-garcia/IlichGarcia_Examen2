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
			cout << "Tiene fruta del diablo? (1: Sí, 2: No): ";
			cin >> hasFruit;

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

					Marine* marine = new Marine(date, positionRange, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki, fruit);
					beings.push_back(marine);
				} else {
					Marine* marine = new Marine(date, positionRange, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki);
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

					Pirate* pirate = new Pirate(positionOcean, crew, function, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki, fruit);
					beings.push_back(pirate);
				} else {
					Pirate* pirate = new Pirate(positionOcean, crew, function, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki);
					beings.push_back(pirate);
				}
			} else if (beingsOption == 3) { // Agregando Revolutionary.
				string date;

				cout << "Fecha: ";
				cin >> date;
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

					Revolutionary* revolutionary = new Revolutionary(date, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki, fruit);
					beings.push_back(revolutionary);
				} else {
					Revolutionary* revolutionary = new Revolutionary(date, name, position, age, hasLookingHaki, hasArmerHaki, hasKingHaki);
					beings.push_back(revolutionary);
				}
			}
		} else if (option == 2) { // Frutas.

		} else {
			option = 3;
		}
	} while (option != 3);

	Paramecia* p = new Paramecia("Hana Hana", "Florecer");
	Paramecia* par = new Paramecia("Gomumu", "Hombre de goma");
	Paramecia* p2 = new Paramecia("Yomi Yomi", "Renacer");
	Paramecia* p3 = new Paramecia("Horu Horu", "Modificar el cuerpo humano");
	Logia* l = new Logia("Pika pika","transformacion");
	Zoan* zo = new Zoan("Hito Hito",  2," Humano");
	Pirate* pir = new Pirate(3, "Sombreros de paja", "Lider", "Monkey D. Luffy", 2, 34,true, false, true);
	Pirate* pir2 = new Pirate(1, "Sombreros de paja",  "Espadachin", "Roronoa Zoro ", 3, 25,true,true,false);
	Pirate* pir3 = new Pirate(4, "Sombreros de paja", "Navegante", "Nami", 4, 27 ,false,false,false);
	Pirate* pir4 = new Pirate(2, "Sombreros de paja", "Francotirador", "Usopp", 0, 30, true,false,false);
	Pirate* pir5 = new Pirate(0, "Sombreros de paja", "Vinsmoke Sanji"  , "Cocinero", 1, 40, true,true,false);
	Pirate* pir6 = new Pirate(0, "Sombreros de paja", "Tony Tony Chopper" , "Medico", 2, 28, false,false,false);
	Pirate* pir7 = new Pirate(2, "Sombreros de paja", "Nico Robin" , "Arqueologa", 3, 45, false,false,false);
	Pirate* pir8 = new Pirate(1, "Sombreros de paja", "Franky" , "Carpintero naval", 0, 33, false,false,false);
	Pirate* pir9 = new Pirate(3, "Sombreros de paja", "Brook", "Musico Espadachin" ,1, 23, false,false,false);
	Marine* mr1 = new Marine("23 de noviembre", 0, "Borsalino", 0, 58,true,true,false);
	Marine* mr2 = new Marine("10 de agosto", 1, "Issho", 1, 48 ,true,true,false);
	Marine* mr3 = new Marine("21 de septiembre", 2, "Kuzan", 2, 41 ,true,true,false);
	Marine* mr4 = new Marine("16 de noviembre", 3, "Sakazuki", 3, 55 ,true,true,false);
	Revolutionary* r1 = new Revolutionary("5 de octubre", "Monkey D Dragon", 0 , 34,true,true,true);
	Revolutionary* r2 = new Revolutionary("8 de Enero", "Emporio Ivankov", 1, 40,true,true,false);
	Revolutionary* r3 = new Revolutionary("20 de Marzo", "Sabo" , 2, 22,true,true,false);
	return 0;
}