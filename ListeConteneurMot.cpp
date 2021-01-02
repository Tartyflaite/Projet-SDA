
#include "ListeConteneurMot.h"


void intialiserConteneurMot(ListeConteneurMot& c){

    c.tab = new ConteneurMot[1];
    
}

void ajouterConteneurMot(ListeConteneurMot& l,ConteneurMot& c){
    
    if(l.nbConteneurs > 0){
        
        ConteneurMot* new_tab = new ConteneurMot[c.nbMots+1];
        
        for(unsigned int i = 0 ; i < c.nbMots ; i++){


            new_tab[i] = l.tab[i];
            
        }
        
        delete[]l.tab;
        
        l.tab = new_tab;
        
    }
    
    l.tab[c.nbMots] = c;
    l.nbConteneurs++;
    
}

void afficherListeConteneurMot(const ListeConteneurMot& l){
    
    for(unsigned int i = 0 ; i < l.nbConteneurs ; i++){

        for (unsigned int j = 0; i < l.tab[i].nbMots; j++) {

            std::cout << l.tab[i].tab[j] << std::endl;

        }

        std::cout << '*' << std::endl;

    }

    std::cout << '*' << std::endl;
    
}

void lireClavierListeConteneurMot(ListeConteneurMot& l) {
    ConteneurMot temp;
    intialiserConteneurMot(temp);

    while (true) {
        intialiserConteneurMot(temp);

        char* buffer = new char[30];

        std::cin >> buffer;
        
        Mot m = buffer;

        if (*buffer == '*')
            break;
        else
            ajouterMot(temp, m);

        lireClavierConteneurMot(temp);

        ajouterConteneurMot(l, temp);
        delete[]temp.tab;
        temp.nbMots = 0;

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

            temp = rechercheDicotomique(l.tab[j],l.tab[i]);
            
            for (unsigned int k = 0; k < temp.nbMots-1; k++) {

                ajouterMot(resultat, temp.tab[k]);

            }

        }

    }

}
