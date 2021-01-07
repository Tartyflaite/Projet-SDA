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
bool estTrie(const ConteneurMot&);
bool motPresentdansConteneurMot(const Mot&, const ConteneurMot&);
void compterPointsConteneurMot(const ConteneurMot&);
ConteneurMot motsPresentsDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);
ConteneurMot motsAbsentsDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);
ConteneurMot rechercheDichotomique(ConteneurMot&, ConteneurMot&);

#endif 
