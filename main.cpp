// main.cpp

#include "Being.h"
#include "Fruit.h"
#include <vector>

int main(int argc, char const *argv[]) {
	vector<Being*> beings;
	vector<Fruit*> fruits;
	int option, beingsOption, fruitsOption;

	do {
		cout << "1) Seres. \n2) Frutas. \n3) Salir.";
		cin >> option;

		if (option == 1) { // Seres.
			cout << "Agregar: \n1) Marina. \n2) Piratas. \n3) Revolucionarios.";
			cint >> beingsOption;
		} else if (option == 2) { // Frutas.

		} else {
			option = 3;
		}
	} while (option != 3);

	int option;

	return 0;
}