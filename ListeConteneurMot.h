#ifndef ListeConteneurMot_h
#define ListeConteneurMot_h


#include "ConteneurMot.h"
#include <iostream>

struct ListeConteneurMot {

	ConteneurMot* tab;
	unsigned int nbConteneurs = 0;
};

void initialiserListeConteneurMot(ListeConteneurMot&);
void ajouterConteneurMot(ListeConteneurMot&, ConteneurMot&);
void afficherListeConteneurMot(const ListeConteneurMot&);
void lireClavierListeConteneurMot(ListeConteneurMot&);
void trierListeConteneurMots(ListeConteneurMot&);
ConteneurMot MotsPresentsDansMinDeuxConteneurs(ListeConteneurMot&);
#endif 
