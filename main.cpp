#include <iostream>
#include "ListeConteneurMot.h"


/*
[brief] : Fonction correspondant à l'exécution du sprint 1
*/
void exo1();

/*
[brief] : Fonction correspondant à l'exécution du sprint 2
*/
void exo2();

/*
[brief] : Fonction correspondant à l'exécution du sprint 3
*/
void exo3();

/*
[brief] : Fonction correspondant à l'exécution du sprint 4
*/
void exo4();

/*
[brief] : Fonction correspondant à l'exécution du sprint 5
*/
void exo5();

/*
[brief] : Fonction correspondant à l'exécution du sprint 6
*/
void exo6();



int main() {
    
    unsigned int choix;
    
    std::cin >> choix;
    
    switch(choix){
            
        case 1: exo1(); break;
        case 2: exo2(); break;
        case 3: exo3(); break;
        case 4: exo4(); break;
        case 5: exo5(); break;
        case 6: exo6(); break;
        default: exit(1);
            
            
            
    }


}

void exo1() {
    
    ConteneurMot c;
    
    intialiserConteneurMot(c);
        
    lireClavierConteneurMot(c);
    
    compterPointsConteneurMot(c);
    
}


void exo2() {
    
    ConteneurMot c;
    
    intialiserConteneurMot(c);
        
    lireClavierConteneurMot(c);

    trierConteneurMot(c);
    
    afficherConteneurMot(c);
    
}


void exo3() {
    
    ConteneurMot liste1;
    ConteneurMot liste2;
    
    intialiserConteneurMot(liste1);
    intialiserConteneurMot(liste2);
        
    lireClavierConteneurMot(liste1);
    lireClavierConteneurMot(liste2);

    trierConteneurMot(liste1);
    trierConteneurMot(liste2);

    afficherConteneurMot(motsAbsentsDansSecondConteneurMot(liste1, liste2));
    
}


void exo4() {
    
    ConteneurMot liste1;
    ConteneurMot liste2;
    
    intialiserConteneurMot(liste1);
    intialiserConteneurMot(liste2);
        
    lireClavierConteneurMot(liste1);
    lireClavierConteneurMot(liste2);

    trierConteneurMot(liste1);
    trierConteneurMot(liste2);

    afficherConteneurMot(rechercheDichotomique(liste1, liste2));
    
}


void exo5() {
    
    ListeConteneurMot liste;
    
    initialiserListeConteneurMot(liste);

    lireClavierListeConteneurMot(liste);

    afficherConteneurMot(MotsPresentsDansMinDeuxConteneurs(liste));
    
}

void exo6() {
    
    Plateau p;

    lireClavierPlateau(p);

    ConteneurMot c;

    intialiserConteneurMot(c);

    lireClavierConteneurMot(c);

    afficherConteneurMot(motsPresentsDansPlateau(c, p));
    
    
}
