// Zoan.cpp

#include "Zoan.h"

Zoan::Zoan(string animal, int position, string name) : Fruit(name) {
	this -> animal = animal;
	this -> position = position;
}

void Zoan::write(ofstream& file) {
	Fruit::write(file);
	file << "\nTipo: " << types[position] << endl;
	file << "Animal: " << animal << endl;
}