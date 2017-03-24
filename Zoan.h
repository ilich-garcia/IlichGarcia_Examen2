// Zoan.h

#ifndef ZOAN_H
#define ZOAN_H

#include <iostream>
#include <string>

using namespace std;

class Zoan {
	private:
		string type[3] = {"Normal", "Prehistórica", "Legendaria"};
		string animal;

	public:
		Zoan(string, string);
};

#endif