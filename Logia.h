// Logia.h

#ifndef LOGIA_H
#define LOGIA_H

#include <iostream>
#include <string>
#include "Fruit.h"

using namespace std;

class Logia : public Fruit {
	private:
		string element;

	public:
		Logia(string, string);
		virtual void write(ofstream&);
};

#endif