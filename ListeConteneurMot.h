#ifndef ListeConteneurMot_h
#define ListeConteneurMot_h


#include "ConteneurMot.h"
#include <iostream>

struct ListeConteneurMot { // type correspondant à une liste de liste de mots

	ConteneurMot* tab; // Tableau dynamique de ConteneurMots
	unsigned int nbConteneurs = 0; // Nombre de conteneurs dans le tableau
};

/*
[brief] : pour initialiser le conteneur de mots et pour permettre le stockage de mots à l'intérieur
ListeConteneurMot [in-out] : liste de liste de mots passée par référence
*/
void initialiserListeConteneurMot(ListeConteneurMot&);

/*
[brief] : pour ajouter une liste de mots à la liste de liste de mots passée en paramètre
ListeConteneurMot [in-out] :  liste de liste de mots passée par référence
ConteneurMot [in] : liste de mots à ajouter à la liste de liste de mots
*/
void ajouterConteneurMot(ListeConteneurMot&, ConteneurMot&);

/*
[brief] : Pour afficher le contenu d'une liste de liste de mots
ListeConteneurMot [in] : liste de liste de mots passée par référence (avec un const pour empêcher la modification)
*/
void afficherListeConteneurMot(const ListeConteneurMot&);

/*
[brief] : pour lire au clavier une liste de liste de mots et l'ajouter à une liste de liste de mots
ListeConteneurMot [in-out] : liste de liste de mots passée par référence
*/
void lireClavierListeConteneurMot(ListeConteneurMot&);

/*
[brief] : pour trier une liste de liste de mots par ordre alphabétique
ListeConteneurMot [in-out] : liste de liste de mots passée par référence
*/
void trierListeConteneurMots(ListeConteneurMot&);

/*
[brief] : retourne les mots présents dans au moins deux listes de mots située dans une liste de liste de mots
ListeConteneurMot [in-out] : liste de liste de mots passée par référence (avec modification possible pour permettre
le tri pour la fonction de recherche dichotomique
return : retourne un ConteneurMot contenant les mots trouvés
*/
ConteneurMot MotsPresentsDansMinDeuxConteneurs(ListeConteneurMot&);
#endif 
