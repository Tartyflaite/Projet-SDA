#include "Mot.h"
#include <iostream>

bool estSuperieurOrdreAlphabetique(const Mot& m1, const Mot& m2) {

    unsigned int taille;

    if (strlen(m1) > strlen(m2))
        taille = int(strlen(m2));
    else
        taille = int(strlen(m1));

    for (unsigned int i = 0; i < taille; i++) {

        if (m1[i] > m2[i])
            return true;
        else if (m1[i] < m2[i])
            return false;

    }

    if (strlen(m1) > strlen(m2))
        return true;
    else
        return false;

}