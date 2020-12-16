#include "ConteneurMot.h"

void intialiserConteneurMot(ConteneurMot& c){
    
    c.tab = new Mot[1];
    
    
}

void ajouterMot(ConteneurMot& c, Mot& m){
    
    if(c.nbMots > 0){
        
        Mot* new_tab = new Mot[c.nbMots+1];
        
        for(unsigned int i = 0 ; i < c.nbMots ; i++){
            
            new_tab[i] = c.tab[i];
            
            
        }
        
        delete[]c.tab;
        
        c.tab = new_tab;
        
    }
    
    c.tab[c.nbMots] = m;
    c.nbMots++;
    
}

void lireClavierConteneurMot(ConteneurMot& c) {

    while (true) {

        char* buffer = new char[30];

        std::cin >> buffer;

        
        Mot m = buffer;

        ajouterMot(c, m);

        if (buffer[0] == '*')
            break;

    }


}

void compterPointsConteneurMot(ConteneurMot& c) {

    unsigned int points = 0;

    for (unsigned int i = 0; i < c.nbMots-1; i++) {

        unsigned int taille = strlen(c.tab[i]);

        if (taille <= 2)
            continue;

        if (taille > 2 && taille < 5)
            points++;

        else {

            switch (taille) {

            case 5: points += 2; break;
            case 6: points += 3; break;
            case 7: points += 5; break;
            default: points += 11; break;

            }

        }
            

    }

    std::cout << points;

}
