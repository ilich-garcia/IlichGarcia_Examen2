// Pirate.h

#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <string>
#include <sstream>
#include "Being.h"

using namespace std;

class Pirate : public Being {
	private:
		string oceans[6] = {"East", "West", "South", "North blue", "Grand line", "New world"};
		int positionOcean;
		string crew;
		string function;

	public:
		Pirate(int, string, string, string, int, int, bool, bool, bool, Fruit*);
		Pirate(int, string, string, string, int, int, bool, bool, bool);
		virtual void write(ofstream&);
};

#endif