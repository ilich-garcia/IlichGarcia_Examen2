// Paramecia.h

#ifndef PARAMECIA_H
#define PARAMECIA_H

#include <iostream>
#include <string>
#include "Fruit.h"

using namespace std;

class Paramecia : public Fruit {
	private:
		string description;

	public:
		Paramecia(string, string);
		virtual void write(ofstream&);
};

#endif