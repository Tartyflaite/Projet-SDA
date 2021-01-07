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

    std::cout << '*' << std::endl;
    
    
}

void lireClavierConteneurMot(ConteneurMot& c) {

    while (true) {

        char* buffer = new char[30];

        std::cin >> buffer;

        if (*buffer == '*')
            break;
        
        Mot m = buffer;

        ajouterMot(c, m);

    }


}

void trierConteneurMot(ConteneurMot& c) {

    while (!estTrie(c)) {

        for (unsigned int i = 1; i < c.nbMots; i++) {

            if (estSuperieurOrdreAlphabetique(c.tab[i-1], c.tab[i])) {

                Mot temp = c.tab[i];
                c.tab[i] = c.tab[i-1];
                c.tab[i-1] = temp;

            }

        }

    }

}


bool estTrie(const ConteneurMot& c) {

    for (unsigned int i = 1; i < c.nbMots; i++) {

        if (estSuperieurOrdreAlphabetique(c.tab[i-1], c.tab[i]))
            return false;

    }

    return true;

}

bool motPresentdansConteneurMot(const Mot& mot, const ConteneurMot& liste) {
    
    for (unsigned int j = 0; j < liste.nbMots; j++) {


        if (strcmp(mot, liste.tab[j]) == 0) {

            return true;

        }


    }
    return false;
}

ConteneurMot motsAbsentsDansSecondConteneurMot(const ConteneurMot& liste1, const ConteneurMot& liste2) {

    ConteneurMot resultat;

    intialiserConteneurMot(resultat);

    for (unsigned int i = 0; i < liste2.nbMots; i++) {


        if (!motPresentdansConteneurMot(liste2.tab[i],liste1))
            ajouterMot(resultat, liste2.tab[i]);

    }

    return resultat;

}

ConteneurMot motsPresentsDansSecondConteneurMot(const ConteneurMot& liste1, const ConteneurMot& liste2) {

    ConteneurMot resultat;

    intialiserConteneurMot(resultat);

    for (unsigned int i = 0; i < liste2.nbMots ; i++) {


        if (motPresentdansConteneurMot(liste2.tab[i], liste1))
            ajouterMot(resultat, liste2.tab[i]);

    }

    return resultat;

}

ConteneurMot rechercheDichotomique(ConteneurMot& liste1, ConteneurMot& liste2) {
    ConteneurMot resultat;
    int max,min,mid;


    if (!estTrie(liste1))
        trierConteneurMot(liste1);    
    
    intialiserConteneurMot(resultat);
    
    for (unsigned int i = 0; i < liste2.nbMots ; i++) {
        max = liste1.nbMots-1;
        min = 0;

        while (min <= max) {
            mid = (min + max) / 2;

            if (strcmp(liste2.tab[i], liste1.tab[mid]) == 0) {
                ajouterMot(resultat, liste2.tab[i]);
                break;
            }

            if (strcmp(liste2.tab[i], liste1.tab[mid]) < 0) {
                max = mid-1;
            }
            else {
                min = mid+1;
            }
        }
    }

    trierConteneurMot(resultat);

    return resultat;
}

void compterPointsConteneurMot(const ConteneurMot& c) {

    unsigned int points = 0;

    for (unsigned int i = 0; i < c.nbMots; i++) {

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

ConteneurMot motsPresentsDansPlateau(const ConteneurMot& c, Plateau& p) {

    ConteneurMot resultat;

    intialiserConteneurMot(resultat);

    for (unsigned int i = 0; i < c.nbMots; i++) {

        if (recherche(c.tab[i], p))
            ajouterMot(resultat, c.tab[i]);

    }

    trierConteneurMot(resultat);

    return resultat;

}