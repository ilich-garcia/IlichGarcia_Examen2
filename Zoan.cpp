// Zoan.cpp

#include "Zoan.h"

Zoan::Zoan(string animal, int position, string name) : Fruit(name) {
	this -> animal = animal;
	this -> position = position;
}

void Zoan::write(ofstream& file) {
	static_cast<Fruit*>(this) -> write(file);
	file << "\nTipo: " << types[position] << endl;
	file << "Animal: " << animal << endl;
}