#ifndef ListeConteneurMot_h
#define ListeConteneurMot_h


#include "ConteneurMot.h"
#include <iostream>

struct ListeConteneurMot { // type correspondant � une liste de liste de mots

	ConteneurMot* tab; // Tableau dynamique de ConteneurMots
	unsigned int nbConteneurs = 0; // Nombre de conteneurs dans le tableau
};

/*
[brief] : pour initialiser le conteneur de mots et pour permettre le stockage de mots � l'int�rieur
ListeConteneurMot [in-out] : liste de liste de mots pass�e par r�f�rence
*/
void initialiserListeConteneurMot(ListeConteneurMot&);

/*
[brief] : pour ajouter une liste de mots � la liste de liste de mots pass�e en param�tre
ListeConteneurMot [in-out] :  liste de liste de mots pass�e par r�f�rence
ConteneurMot [in] : liste de mots � ajouter � la liste de liste de mots
*/
void ajouterConteneurMot(ListeConteneurMot&, ConteneurMot&);

/*
[brief] : Pour afficher le contenu d'une liste de liste de mots
ListeConteneurMot [in] : liste de liste de mots pass�e par r�f�rence (avec un const pour emp�cher la modification)
*/
void afficherListeConteneurMot(const ListeConteneurMot&);

/*
[brief] : pour lire au clavier une liste de liste de mots et l'ajouter � une liste de liste de mots
ListeConteneurMot [in-out] : liste de liste de mots pass�e par r�f�rence
*/
void lireClavierListeConteneurMot(ListeConteneurMot&);

/*
[brief] : pour trier une liste de liste de mots par ordre alphab�tique
ListeConteneurMot [in-out] : liste de liste de mots pass�e par r�f�rence
*/
void trierListeConteneurMots(ListeConteneurMot&);

/*
[brief] : retourne les mots pr�sents dans au moins deux listes de mots situ�e dans une liste de liste de mots
ListeConteneurMot [in-out] : liste de liste de mots pass�e par r�f�rence (avec modification possible pour permettre
le tri pour la fonction de recherche dichotomique
return : retourne un ConteneurMot contenant les mots trouv�s
*/
ConteneurMot MotsPresentsDansMinDeuxConteneurs(ListeConteneurMot&);
#endif 
