// Logia.cpp

#include "Logia.h"

Logia::Logia(string element, string name) : Fruit(name) {
	this -> element = element;
}

void Logia::write(ofstream& file) {
	Fruit::write(file);
	file << "\nElemento: " << element << endl;
}