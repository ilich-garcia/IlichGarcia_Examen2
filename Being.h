// Being.h

#ifndef BEING_H
#define BEING_H

#include "Fruit.h"

using namespace std;

class Being {
	protected:
		string races[6] = {"Gyojin", "Kyojin", "Ningyo", "Humano", "Mink", "Skypiean"};
		string name;
		int position;
		int age;
		bool hasFruit;
		bool lookingHaki;
		bool armerHaki;
		bool kingHaki;
		Fruit* fruit;

	public:
		Being(string, int, int, bool, bool, bool, Fruit*); // Si tiene fruta.
		Being(string, int, int, bool, bool, bool); // Si no tiene fruta.
		virtual void write(ofstream&);
		~Being();
};

#endif