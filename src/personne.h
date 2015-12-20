#ifndef __PERSONNE_H__
#define __PERSONNE_H__

#include "date.h"
#include "coordonnees.h"


#define TAILLECHAINE 20


typedef struct Personne
{
	char nom[TAILLECHAINE];
	char prenom[TAILLECHAINE];
	char genre;
	Date dateDeNaissance;
	int age;
	Coordonnees coordonnees;
} Personne;


void saisirPersonne(Personne* p);


void afficherPersonne(Personne p);


void afficherDetailPersonne(Personne p);

#endif
