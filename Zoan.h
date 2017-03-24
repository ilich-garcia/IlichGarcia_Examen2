// Zoan.h

#ifndef ZOAN_H
#define ZOAN_H

#include <iostream>
#include <string>
#include "Fruit.h"

using namespace std;

class Zoan : public Fruit {
	private:
		string types[3] = {"Normal", "Prehistórica", "Legendaria"};
		string animal;
		int position;

	public:
		Zoan(string, int, string);
		virtual void write(ofstream&);
};

#endif