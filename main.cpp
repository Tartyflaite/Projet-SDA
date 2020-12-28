#include <iostream>

#include "ConteneurMot.h"

int main() {
    
    ConteneurMot liste1;
    ConteneurMot liste2;
    
    intialiserConteneurMot(liste1);
    intialiserConteneurMot(liste2);
        
    lireClavierConteneurMot(liste1);
    lireClavierConteneurMot(liste2);

    trierConteneurMot(liste1);
    trierConteneurMot(liste2);

    afficherConteneurMot(rechercheDicotomique(liste1, liste2));
  
    
}
