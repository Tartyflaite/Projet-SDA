#ifndef Plateau_h
#define Plateau_h

#include "Mot.h"

struct Case { // Type correspondant à une case du plateau

	char lettre; // Lettre de la case
	bool visite; // booléen pour vérifier si une case a été visitée dans le cadre de la fonction de recherche

};

struct Plateau { // Type correspondant au plateau entier

	Case coords[4][4]; // Tableau de Cases à deux dimensions (4*4)

};


struct Coords { // Type correspondant aux coordoonées dans le tableau

	int x; // Abscisses
	int y; // Ordonnées

};

/*
[brief] : lire au clavier un plateau pour le stocker dans une variable de type plateau
Plateau [in-out] : Plateau passé par référence
*/
void lireClavierPlateau(Plateau&);

/*
[brief] : pour afficher le plateau à l'écran
Plateau [in] : Plateau passé par référence (avec un const pour empêcher la modification)
*/
void afficherPlateau(const Plateau&);

/*
[brief] : vérifier si un mot est présent dans le tableau à l'aide de la fonction récursive sousRecherche
Mot [in] : Mot passé par référence
Plateau [in-out] : Plateau passé par référence (avec modification possible pour changer le statut des cases,
et passer de visitée à non visitée)
return : retourne vrai si le mot est présent, faux dans le cas contraire
*/
bool recherche(const Mot&, Plateau&);

/*
[brief] : fonction permettant de vérifier la présence d'un mot dans un plateau en exploitant le principe de
récursivité
Mot [in] : mot que l'on souhaite vérifier
unsigned int [in] : position dans le mot
Coords [in] : Coordoonées passées par référence
Plateau [in-out] : Plateau passé par référence (avec modification possible pour changer le statut des cases,
et passer de visitée à non visitée)
return : retourne vrai si le mot est présent, faux dans le cas contraire
*/
bool sousRecherche(const Mot&, unsigned int, const Coords&, Plateau&);


#endif 
