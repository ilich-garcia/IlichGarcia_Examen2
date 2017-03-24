// Being.h

#ifndef BEING_H
#define BEING_H

#include <iostream>
#include <string>
#include "Fruit.h"

using namespace std;

class Being {
	protected:
		string race[6] = {"Gyojin", "Kyojin", "Ningyo", "Humano", "Mink", "Skypiean"};
		int age;
		string name;
		bool fruit;
		bool lookingHaki;
		bool armerHaki;
		bool kingHaki;

	public:
		Being();
		
		~Being();
};

#endif