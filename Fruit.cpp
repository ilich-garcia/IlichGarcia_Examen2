// Fruit.cpp

#include "Fruit.h"

Fruit::Fruit(string name) {
	this -> name = name;
}

string Fruit::getName() {
	return name;
}

void Fruit::write(ofstream& file) {
	file << "Nombre: " << name << endl;
}