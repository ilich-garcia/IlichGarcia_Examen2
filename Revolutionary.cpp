// Revolutionary.cpp

#include "Revolutionary.h"

Revolutionary::Revolutionary(string date, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki, Fruit* fruit) : Being(name, position, age, lookingHaki, armerHaki, kingHaki, fruit) {
	this -> date = date;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << "names/" << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

Revolutionary::Revolutionary(string date, string name, int position, int age, bool lookingHaki, bool armerHaki, bool kingHaki) : Being(name, position, age, lookingHaki, armerHaki, kingHaki) {
	this -> date = date;

	ofstream file;
	string myString;
	stringstream stringStream;
	
	stringStream << "names/" << name << ".log";

	myString = stringStream.str();

	file.open(myString.c_str());
	write(file);
	file.close();
}

void Revolutionary::write(ofstream& file) {
	Being::write(file);
	file << "\nFecha: " << date << endl;
}