// Pirate.h

#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <string>

using namespace std;

class Pirate {
private:
	string ocean[6] = {"East", "West", "South", "North blue", "Grand line", "New world"}
	string crew;
	string function;

public:
	Pirate(string, string, string);
	~Pirate();
};

#endif