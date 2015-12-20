#include <stdio.h>

#include "eleve.h"


int main()
{
	Eleve eleve;
	
	
	
	printf("Saisie de l'eleve :\n\n");
	saisirEleve(&eleve);
	
	printf("\n");
	
	printf("Affichage simple de l'eleve :\n\n");
	afficherEleve(eleve);
	
	printf("\n");
	
	printf("Affichage detaille de l'eleve :\n\n");
	afficherDetailEleve(eleve);
	
	printf("\n");
	return 0;
}
