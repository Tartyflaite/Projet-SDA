#include <iostream>

#include "ConteneurMot.h"
#include "ListeConteneurMot.h"
#include "Plateau.h"


int main() {
    
    Plateau p;

    lireClavierPlateau(p);

    ConteneurMot c;

    intialiserConteneurMot(c);

    lireClavierConteneurMot(c);

    afficherConteneurMot(motsPresentsDansPlateau(c, p));


}
