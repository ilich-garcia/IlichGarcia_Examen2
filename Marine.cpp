// Marine.cpp

#include "Marine.h"

Marine::Marine(string date, int positionRange, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki, Fruit* fruit) : Being(name, position, age, lookingHaki, armerHaki, kingHaki, fruit) {
	this -> date = date;
	this -> positionRange = positionRange;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

Marine::Marine(string date, int positionRange, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki) : Being(name, position, age, lookingHaki, armerHaki, kingHaki) {
	this -> date = date;
	this -> positionRange = positionRange;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

void Marine::write(ofstream& file) {
	static_cast<Being*>(this) -> write(file);
	file << "\nFecha: " << date << endl;
	file << "Rango: " << ranges[positionRange] << endl;
}