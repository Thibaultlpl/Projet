Zoo: main.o animaux.o espace.o joueur.o barney.o parc.o
	g++ main.o animaux.o espace.o joueur.o barney.o parc.o -g -o Zoo

main.o: main.cpp
	g++ -g -c main.cpp

espace.o: espace.cpp espace.h
	g++ -g -c espace.cpp

animaux.o: animaux.cpp animaux.h
	g++ -g -c animaux.cpp

joueur.o: joueur.cpp joueur.h
	g++ -g -c joueur.cpp

barney.o: barney.cpp barney.h
	g++ -g -c barney.cpp

parc.o: parc.cpp parc.h
	g++ -g -c parc.cpp
