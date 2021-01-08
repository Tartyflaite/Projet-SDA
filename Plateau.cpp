#include <iostream>
#include "Plateau.h"

void lireClavierPlateau(Plateau& p) {

	for (unsigned int i = 0; i < 4; i++) {

		char* buffer = new char[4];

		std::cin >> buffer;

		for (unsigned int j = 0; j < 4; j++) {

			p.coords[i][j].lettre = buffer[j];

		}

	}


}

void afficherPlateau(const Plateau& p) {

	for (unsigned int i = 0; i < 4; i++) {

		for (unsigned int j = 0; j < 4; j++) {

			std::cout << " ";

			std::cout << p.coords[i][j].lettre;

		}

		std::cout << std::endl;

	}

}

bool recherche(const Mot& m, Plateau& p){

	for (unsigned int i = 0; i < 4; i++) {

		for (unsigned int j = 0; j < 4; j++) {

			p.coords[i][j].visite = false;

		}

	}


	for (unsigned int i = 0; i < 4; i++) {

		for (unsigned int j = 0; j < 4; j++) {

			Coords c;

			c.x = i;
			c.y = j;

			if (sousRecherche(m, 0, c, p))
				return true;

		}

	}

	return false;

}

bool sousRecherche(const Mot& m, unsigned int pos, const Coords& c, Plateau& p) {

	if (pos >= strlen(m))
		return true;

	if (c.x > 3 || c.y > 3 || c.x < 0 || c.y < 0)
		return false;

	if (p.coords[c.x][c.y].lettre != m[pos])
		return false;

	if (p.coords[c.x][c.y].visite)
		return false;

	p.coords[c.x][c.y].visite = true;

	for (unsigned int i = 0 ; i < 8 ; i++) {

		Coords c2 = c;

		switch (i) {

		case 0: c2.x++; break;
		case 1: c2.y++; break;
		case 2: c2.x--; break;
		case 3: c2.y--; break;
		case 4: c2.x++; c2.y++; break;
		case 5: c2.x++; c2.y--; break;
		case 6: c2.x--; c2.y++; break;
		case 7: c2.x--; c2.y--; break;

		}

		if (sousRecherche(m, pos + 1, c2, p))
			return true;

	}

	p.coords[c.x][c.y].visite = false;
	
	return false;


}

