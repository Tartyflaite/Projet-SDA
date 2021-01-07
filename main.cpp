#include <iostream>

#include "ConteneurMot.h"
#include "ListeConteneurMot.h"


int main() {
    
   

    ListeConteneurMot liste;
    
    initialiserListeConteneurMot(liste);

    lireClavierListeConteneurMot(liste);

    afficherConteneurMot(MotsPresentsDansMinDeuxConteneurs(liste));



    
}
