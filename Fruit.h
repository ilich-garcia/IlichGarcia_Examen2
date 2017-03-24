#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Fruit {
	protected:
		string name;

	public:
		Fruit(string);
		string getName();
		virtual void write(ofstream&);
};

#endif