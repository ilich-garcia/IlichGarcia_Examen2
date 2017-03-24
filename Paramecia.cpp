// Paramecia.cpp

#include "Paramecia.h"

Paramecia::Paramecia(string description, string name) : Fruit(name) {
	this -> description = description;
}

void Paramecia::write(ofstream& file) {
	Fruit::write(file);
	file << "\nDescripción: " << description << endl;
}