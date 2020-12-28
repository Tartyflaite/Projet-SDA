#ifndef ConteneurMot_h
#define ConteneurMot_h

#include "Mot.h"
#include <iostream>

struct ConteneurMot {
    
    Mot* tab;
    unsigned int nbMots = 0;
    
};

void intialiserConteneurMot(ConteneurMot&);
void ajouterMot(ConteneurMot&, Mot&);
void afficherConteneurMot(const ConteneurMot&);
void lireClavierConteneurMot(ConteneurMot&);
void trierConteneurMot(ConteneurMot&);
bool estTrie(ConteneurMot&);
bool motPresentdansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&, unsigned int);
ConteneurMot motsPresentsDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);
ConteneurMot motsAbsentDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);
ConteneurMot rechercheDicotomique(const ConteneurMot&, const ConteneurMot&);

#endif 
