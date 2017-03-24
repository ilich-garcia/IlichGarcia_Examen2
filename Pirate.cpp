// Pirate.cpp

#include "Pirate.h"

Pirate::Pirate(int positionOcean, string crew, string function, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki, Fruit* fruit) : Being(name, position, age, lookingHaki, armerHaki, kingHaki, fruit) {
	this -> positionOcean = positionOcean;
	this -> crew = crew;
	this -> function = function;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

Pirate::Pirate(int positionOcean, string crew, string function, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki) : Being(name, position, age, lookingHaki, armerHaki, kingHaki) {
	this -> positionOcean = positionOcean;
	this -> crew = crew;
	this -> function = function;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

void Pirate::write(ofstream& file) {
	static_cast<Being*>(this) -> write(file);
	file << "\nOcéano: " << oceans[positionOcean] << endl;
	file << "Tripulación a la que pertenece: " << crew << endl;
	file << "Función: " << function << endl;
}