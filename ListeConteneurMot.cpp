
#include "ListeConteneurMot.h"


void initialiserListeConteneurMot(ListeConteneurMot& l) {

    l.tab = new ConteneurMot[1];
    
}

void ajouterConteneurMot(ListeConteneurMot& l,ConteneurMot& c){
    
    if(l.nbConteneurs > 0){
        
        ConteneurMot* new_tab = new ConteneurMot[l.nbConteneurs+1];
        
        for(unsigned int i = 0 ; i < l.nbConteneurs ; i++){

            new_tab[i] = l.tab[i];
            
        }
        
        delete[]l.tab;
        
        l.tab = new_tab;
        
    }
    
    l.tab[l.nbConteneurs] = c;
    l.nbConteneurs++;
 
    
}

void afficherListeConteneurMot(const ListeConteneurMot& l){
    
    for(unsigned int i = 0 ; i < l.nbConteneurs ; i++){
    
        afficherConteneurMot(l.tab[i]);

    }

    std::cout << "*" << std::endl;
    
}

void lireClavierListeConteneurMot(ListeConteneurMot& l) {

    
    while (true) {

        ConteneurMot temp;

        intialiserConteneurMot(temp);

        char* buffer = new char[30];

        std::cin >> buffer;

        if (*buffer == '*')
            break;
        else {
            Mot m = buffer;
            ajouterMot(temp, m);
        }

        lireClavierConteneurMot(temp);

        ajouterConteneurMot(l, temp);


    }




}

void trierListeConteneurMots(ListeConteneurMot& l) {
    
    for (unsigned int i = 0; i < l.nbConteneurs; i++) {
        trierConteneurMot(l.tab[i]);
    }
}

ConteneurMot MotsPresentsDansMinDeuxConteneurs(ListeConteneurMot& l) {
    ConteneurMot resultat, temp;
    intialiserConteneurMot(resultat);

    for (unsigned int i = 0; i < l.nbConteneurs; i++) {
        
        for (unsigned int j = 0; j < l.nbConteneurs; j++) {

            if (j == i)
                continue;

            temp = motsPresentsDansSecondConteneurMot(l.tab[j],l.tab[i]);
            
            for (unsigned int k = 0; k < temp.nbMots ; k++) {

                ajouterMot(resultat, temp.tab[k]);

            }

        }

    }

    trierConteneurMot(resultat);

    return resultat;

}

