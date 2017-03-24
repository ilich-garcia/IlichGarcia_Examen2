// Being.cpp

#include "Being.h"

Being::Being(string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki, Fruit* fruit) {
	this -> name = name;
	this -> position = position;
	this -> age = age;
	this -> lookingHaki = lookingHaki;
	this -> armerHaki = armerHaki;
	this -> kingHaki = kingHaki;
	this -> fruit = fruit;
	this -> hasFruit = true;
}

Being::Being(string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki) {
	this -> name = name;
	this -> position = position;
	this -> age = age;
	this -> lookingHaki = lookingHaki;
	this -> armerHaki = armerHaki;
	this -> kingHaki = kingHaki;
	this -> hasFruit = false;
}

void Being::write(ofstream& file) {
	file << "Nombre: " << name << endl;
	file << "Raza: " << races[position] << endl;
	file << "Edad: " << age << endl;

	if (hasFruit) {
		fruit -> write(file);
	}

	file << "Haki de Observación: " << lookingHaki << endl;
	file << "Haki de Armadura: " << armerHaki << endl;
	file << "Haki del Rey: " << kingHaki << endl;
}

Being::~Being() {
	if (hasFruit) {
		delete fruit;	
	}
}