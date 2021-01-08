#ifndef ConteneurMot_h
#define ConteneurMot_h


#include "Plateau.h"
#include <iostream>

struct ConteneurMot { // Type correspondant à une liste de Mots
    
    Mot* tab; // Tableau dynamique de Mots
    unsigned int nbMots = 0; // Nombre de Mots contenus dans le tableau
    
};

/*
[brief] : pour initialiser la liste de mots et pour permettre le stockage de mots à l'intérieur
ConteneurMot [in-out] : liste de mots passée par référence
*/
void intialiserConteneurMot(ConteneurMot&);

/*
[brief] : pour ajouter un Mot à la liste de mots passée en paramètre
ConteneurMot [in-out] :  liste de mots passée par référence
Mot [in] : Mot à ajouter à la liste de mots
*/
void ajouterMot(ConteneurMot&, const Mot&);

/*
[brief] : Pour afficher le contenu d'une liste de mots
ConteneurMot [in] : liste de mots passée par référence (avec un const pour empêcher la modification)
*/
void afficherConteneurMot(const ConteneurMot&);

/*
[brief] : pour lire au clavier une liste de mots et l'ajouter à une liste de mots
ConteneurMot [in-out] : liste de mots passée par référence
*/
void lireClavierConteneurMot(ConteneurMot&);

/*
[brief] : pour trier une liste de mots par ordre alphabétique
ConteneurMot [in-out] : liste de mots passée par référence
*/
void trierConteneurMot(ConteneurMot&);

/*
[brief] : pour vérifier si une liste de mots est trié
ConteneurMot [in] : liste de mots passée par référence (avec un const pour empêcher la modification)
return : booléen, vrai si le conteneur est trié et faux dans le cas contraire
*/
bool estTrie(const ConteneurMot&);

/*
[brief] : pour vérifier si un certain mot est présent dans une liste de mots
Mot [in] : le mot que l'on veut vérifier
ConteneurMot [in] : liste de mots passée par référence (avec un const pour empêcher la modification)
return : booléen, retourne vrai si le mot est présent et faux dans le cas contraire
*/
bool motPresentdansConteneurMot(const Mot&, const ConteneurMot&);

/*
[brief] : compter le nombre de points que représente une liste de mots
ConteneurMot [in] : liste de mots passée par référence (avec un const pour empêcher la modification)
*/
void compterPointsConteneurMot(const ConteneurMot&);

/*
[brief] : retourne les mots présents dans la première liste de mots passée en paramètre mais 
absent de la seconde liste passé en paramètre
ConteneurMot [in] : première liste de mots passée par référence (avec un const pour empêcher la modification)
ConteneurMot [in] : seconde liste de mots passée par référence pour empêcher la modification)
return : retourne un ConteneurMot contenant les mots trouvés
*/
ConteneurMot motsAbsentsDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);

/*
[brief] : retourne les mots présents dans les deux listes de mots passées en paramètre via une 
recherche dichotomique
ConteneurMot [in-out] : première liste de mots passée par référence (avec triage ultérieur possible si la liste n'est pas triée)
ConteneurMot [in] : seconde liste de mots passée par référence (avec un const pour empêcher la modification)
return : retourne un ConteneurMot contenant les mots trouvés
*/
ConteneurMot rechercheDichotomique(ConteneurMot&, const ConteneurMot&);

/*
[brief] : retourne les mots présents dans la liste de mots passée en paramètre
et sur le plateau passé en paramètre
ConteneurMot [in] : première liste de mots passée par référence (avec un const pour empêcher la modification)
Plateau [in-out] : le plateau (sans const pour permettre le basculement du statut des cases, entre visitées ou non)
return : retourne un ConteneurMot contenant les mots trouvés
*/
ConteneurMot motsPresentsDansPlateau(const ConteneurMot&, Plateau&);

#endif 
