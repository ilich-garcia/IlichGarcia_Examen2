// Revolutionary.h

#ifndef REVOLUTIONARY_H
#define REVOLUTIONARY_H

#include <iostream>
#include <string>
#include <sstream>
#include "Being.h"

using namespace std;

class Revolutionary : public Being {
	private:
		string date;

	public:
		Revolutionary(string, string, int, int, bool, bool, bool, Fruit*);
		Revolutionary(string, string, int, int, bool, bool, bool);
		virtual void write(ofstream&);
};

#endif