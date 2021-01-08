#ifndef ConteneurMot_h
#define ConteneurMot_h


#include "Plateau.h"
#include <iostream>

struct ConteneurMot { // Type correspondant � une liste de Mots
    
    Mot* tab; // Tableau dynamique de Mots
    unsigned int nbMots = 0; // Nombre de Mots contenus dans le tableau
    
};

/*
[brief] : pour initialiser la liste de mots et pour permettre le stockage de mots � l'int�rieur
ConteneurMot [in-out] : liste de mots pass�e par r�f�rence
*/
void intialiserConteneurMot(ConteneurMot&);

/*
[brief] : pour ajouter un Mot � la liste de mots pass�e en param�tre
ConteneurMot [in-out] :  liste de mots pass�e par r�f�rence
Mot [in] : Mot � ajouter � la liste de mots
*/
void ajouterMot(ConteneurMot&, const Mot&);

/*
[brief] : Pour afficher le contenu d'une liste de mots
ConteneurMot [in] : liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
*/
void afficherConteneurMot(const ConteneurMot&);

/*
[brief] : pour lire au clavier une liste de mots et l'ajouter � une liste de mots
ConteneurMot [in-out] : liste de mots pass�e par r�f�rence
*/
void lireClavierConteneurMot(ConteneurMot&);

/*
[brief] : pour trier une liste de mots par ordre alphab�tique
ConteneurMot [in-out] : liste de mots pass�e par r�f�rence
*/
void trierConteneurMot(ConteneurMot&);

/*
[brief] : pour v�rifier si une liste de mots est tri�
ConteneurMot [in] : liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
return : bool�en, vrai si le conteneur est tri� et faux dans le cas contraire
*/
bool estTrie(const ConteneurMot&);

/*
[brief] : pour v�rifier si un certain mot est pr�sent dans une liste de mots
Mot [in] : le mot que l'on veut v�rifier
ConteneurMot [in] : liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
return : bool�en, retourne vrai si le mot est pr�sent et faux dans le cas contraire
*/
bool motPresentdansConteneurMot(const Mot&, const ConteneurMot&);

/*
[brief] : compter le nombre de points que repr�sente une liste de mots
ConteneurMot [in] : liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
*/
void compterPointsConteneurMot(const ConteneurMot&);

/*
[brief] : retourne les mots pr�sents dans la premi�re liste de mots pass�e en param�tre mais 
absent de la seconde liste pass� en param�tre
ConteneurMot [in] : premi�re liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
ConteneurMot [in] : seconde liste de mots pass�e par r�f�rence pour emp�cher la modification)
return : retourne un ConteneurMot contenant les mots trouv�s
*/
ConteneurMot motsAbsentsDansSecondConteneurMot(const ConteneurMot&, const ConteneurMot&);

/*
[brief] : retourne les mots pr�sents dans les deux listes de mots pass�es en param�tre via une 
recherche dichotomique
ConteneurMot [in-out] : premi�re liste de mots pass�e par r�f�rence (avec triage ult�rieur possible si la liste n'est pas tri�e)
ConteneurMot [in] : seconde liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
return : retourne un ConteneurMot contenant les mots trouv�s
*/
ConteneurMot rechercheDichotomique(ConteneurMot&, const ConteneurMot&);

/*
[brief] : retourne les mots pr�sents dans la liste de mots pass�e en param�tre
et sur le plateau pass� en param�tre
ConteneurMot [in] : premi�re liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
Plateau [in-out] : le plateau (sans const pour permettre le basculement du statut des cases, entre visit�es ou non)
return : retourne un ConteneurMot contenant les mots trouv�s
*/
ConteneurMot motsPresentsDansPlateau(const ConteneurMot&, Plateau&);

#endif 
