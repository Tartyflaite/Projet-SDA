#ifndef Plateau_h
#define Plateau_h

#include "Mot.h"

struct Case { // Type correspondant � une case du plateau

	char lettre; // Lettre de la case
	bool visite; // bool�en pour v�rifier si une case a �t� visit�e dans le cadre de la fonction de recherche

};

struct Plateau { // Type correspondant au plateau entier

	Case coords[4][4]; // Tableau de Cases � deux dimensions (4*4)

};


struct Coords { // Type correspondant aux coordoon�es dans le tableau

	int x; // Abscisses
	int y; // Ordonn�es

};

/*
[brief] : lire au clavier un plateau pour le stocker dans une variable de type plateau
Plateau [in-out] : Plateau pass� par r�f�rence
*/
void lireClavierPlateau(Plateau&);

/*
[brief] : pour afficher le plateau � l'�cran
Plateau [in] : Plateau pass� par r�f�rence (avec un const pour emp�cher la modification)
*/
void afficherPlateau(const Plateau&);

/*
[brief] : v�rifier si un mot est pr�sent dans le tableau � l'aide de la fonction r�cursive sousRecherche
Mot [in] : Mot pass� par r�f�rence
Plateau [in-out] : Plateau pass� par r�f�rence (avec modification possible pour changer le statut des cases,
et passer de visit�e � non visit�e)
return : retourne vrai si le mot est pr�sent, faux dans le cas contraire
*/
bool recherche(const Mot&, Plateau&);

/*
[brief] : fonction permettant de v�rifier la pr�sence d'un mot dans un plateau en exploitant le principe de
r�cursivit�
Mot [in] : mot que l'on souhaite v�rifier
unsigned int [in] : position dans le mot
Coords [in] : Coordoon�es pass�es par r�f�rence
Plateau [in-out] : Plateau pass� par r�f�rence (avec modification possible pour changer le statut des cases,
et passer de visit�e � non visit�e)
return : retourne vrai si le mot est pr�sent, faux dans le cas contraire
*/
bool sousRecherche(const Mot&, unsigned int, const Coords&, Plateau&);


#endif 
