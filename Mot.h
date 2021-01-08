#ifndef Mot_h
#define Mot_h

typedef const char* Mot; // D�finition du type Mot en tant que cha�ne de caract�res

/*
[brief] : Fonction v�rifiant si le premier Mot pass� en param�tre est situ� plus loin
dans l'ordre alphab�tique que le second Mot pass� en param�tre
Mot [in] : premier mot � passer en param�tre
Mot [in] : second mot � passer en param�tre
return : bool�en, retourne vrai si c'est le cas et faux dans le cas contraire
*/
bool estSuperieurOrdreAlphabetique(const Mot&, const Mot&);

#endif
