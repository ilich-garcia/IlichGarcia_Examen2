// Marine.h

#ifndef MARINE_H
#define MARINE_H

#include <iostream>
#include <string>
#include <sstream>
#include "Being.h"

using namespace std;

class Marine : public Being {
	private:
		string date;
		string ranges[5] = {"Cadete", "Teniente", "Vice-almirante", "Almirante", "Almirante de flota"};
		int positionRange;

	public:
		Marine(string, int, string, int, int, bool, bool, bool, Fruit*);
		Marine(string, int, string, int, int, bool, bool, bool);
		virtual void write(ofstream&);
};

#endif