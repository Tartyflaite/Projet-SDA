#ifndef Mot_h
#define Mot_h

typedef const char* Mot; // Définition du type Mot en tant que chaîne de caractères

/*
[brief] : Fonction vérifiant si le premier Mot passé en paramètre est situé plus loin
dans l'ordre alphabétique que le second Mot passé en paramètre
Mot [in] : premier mot à passer en paramètre
Mot [in] : second mot à passer en paramètre
return : booléen, retourne vrai si c'est le cas et faux dans le cas contraire
*/
bool estSuperieurOrdreAlphabetique(const Mot&, const Mot&);

#endif
