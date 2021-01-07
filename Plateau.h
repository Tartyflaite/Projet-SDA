#ifndef Plateau_h
#define Plateau_h

#include "Mot.h"

struct Case {

	char lettre;
	bool visite;

};

struct Plateau {

	Case coords[4][4];

};


struct Coords {

	int x;
	int y;

};

void lireClavierPlateau(Plateau&);
void afficherPlateau(const Plateau&);
bool recherche(const Mot&, Plateau&);
bool sousRecherche(const Mot&, unsigned int, const Coords&, Plateau&);


#endif 
