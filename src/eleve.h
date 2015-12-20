#ifndef __ELEVE_H__
#define __ELEVE_H__

#include "personne.h"


#define NBTUTEURS 2


typedef struct Eleve
{
	Personne eleve;
	//Classe* classe;
	int nbTuteurs;
	Personne tuteurs[NBTUTEURS];
} Eleve;


void saisirEleve(Eleve* e);


void afficherEleve(Eleve e);


void afficherDetailEleve(Eleve e);

#endif
