main:	main.o Being.o Fruit.o Marine.o Pirate.o Revolutionary.o Paramecia.o Zoan.o Logia.o
	g++ main.o Being.o Fruit.o Marine.o Pirate.o Revolutionary.o Paramecia.o Zoan.o Logia.o -o main -std=c++0x

main.o:	main.cpp Being.h Fruit.h Marine.h Pirate.h Revolutionary.h Paramecia.h Zoan.h Logia.h
	g++ -c main.cpp -std=c++0x

# Being y sus hijos.

Marine.o:	Marine.cpp Marine.h Being.h
	g++ -c Marine.cpp -std=c++0x

Pirate.o:	Pirate.cpp Pirate.h Being.h
	g++ -c Pirate.cpp -std=c++0x

Revolutionary.o:	Revolutionary.cpp Revolutionary.h Being.h
	g++ -c Revolutionary.cpp -std=c++0x
	
Being.o:	Being.cpp Being.h
	g++ -c Being.cpp -std=c++0x

# Fruit y sus hijos.

Paramecia.o:	Paramecia.cpp Paramecia.h Fruit.h
	g++ -c Paramecia.cpp -std=c++0x

Zoan.o:	Zoan.cpp Zoan.h Fruit.h
	g++ -c Zoan.cpp -std=c++0x

Logia.o:	Logia.cpp Logia.h Fruit.h
	g++ -c Logia.cpp -std=c++0x

Fruit.o:	Fruit.cpp Fruit.h
	g++ -c Fruit.cpp -std=c++0x