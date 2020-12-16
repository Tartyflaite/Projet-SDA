#include "ConteneurMot.h"

void intialiserConteneurMot(ConteneurMot& c){
    
    c.tab = new Mot[1];
    
}

void ajouterMot(ConteneurMot& c, Mot& m){
    
    if(c.nbMots > 0){
        
        Mot* new_tab = new Mot[c.nbMots+1];
        
        for(unsigned int i = 0 ; i < c.nbMots ; i++){

            if (strcmp(c.tab[i], m) == 0)
                return;

            new_tab[i] = c.tab[i];
            
        }
        
        delete[]c.tab;
        
        c.tab = new_tab;
        
    }
    
    c.tab[c.nbMots] = m;
    c.nbMots++;
    
}

void afficherConteneurMot(const ConteneurMot& c){
    
    for(unsigned int i = 0 ; i < c.nbMots ; i++){
        
        std::cout << c.tab[i] << std::endl;
        
        
    }
    
    
}

void lireClavierConteneurMot(ConteneurMot& c) {

    while (true) {

        char* buffer = new char[30];

        std::cin >> buffer;
        
        Mot m = buffer;

        ajouterMot(c, m);

        if (*buffer == '*')
            break;


    }


}

void trierConteneurMot(ConteneurMot& c) {

    while (!estTrie(c)) {

        for (unsigned int i = 1; i < c.nbMots-1; i++) {

            if (estSuperieurOrdreAlphabetique(c.tab[i-1], c.tab[i])) {

                Mot temp = c.tab[i];
                c.tab[i] = c.tab[i-1];
                c.tab[i-1] = temp;

            }

        }

    }

}


bool estTrie(ConteneurMot& c) {

    for (unsigned int i = 1; i < c.nbMots-1; i++) {

        if (estSuperieurOrdreAlphabetique(c.tab[i-1], c.tab[i]))
            return false;

    }

    return true;

}

ConteneurMot motsPresentsDansSecondConteneurMot(const ConteneurMot& liste1, const ConteneurMot& liste2) {

    ConteneurMot resultat;

    intialiserConteneurMot(resultat);

    bool present;

    for (unsigned int i = 0; i < liste2.nbMots - 1; i++) {

        present = false;

        for (unsigned int j = 0; j < liste1.nbMots - 1; j++) {

            
            if (strcmp(liste2.tab[i], liste1.tab[j]) == 0) {

                present = true;

            }
            

        }


        if (!present)
            ajouterMot(resultat, liste2.tab[i]);

     


    }

    Mot end = "*";

    ajouterMot(resultat, end);

    return resultat;

}