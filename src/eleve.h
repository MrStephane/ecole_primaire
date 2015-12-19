#ifndef __ELEVE_H__
#define __ELEVE_H__

#include "personne.h"


#define NBTUTEURS 2


typedef struct Eleve
{
	Personne eleve;
	//Classe* classe;
	Personne tuteurs[NBTUTEURS];
} Eleve;

#endif
