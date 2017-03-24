// Fruit.cpp

#include "Fruit.h"

Fruit::Fruit(string name) {
	this -> name = name;
}

void Fruit::write(ofstream& file) {
	file << "Nombre: " << name << endl;
}