// Marine.h

#ifndef MARINE_H
#define MARINE_H

#include <iostream>
#include <string>

using namespace std;

class Marine {
	private:
		string date;
		string range[5] = {"Cadete", "Teniente", "Vice-almirante", "Almirante", "Almirante de flota"};

	public:
		Marine(string, string);
};

#endif