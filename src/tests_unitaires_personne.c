#include <stdio.h>

#include "personne.h"


int main()
{
	Personne personne;
	
	
	printf("Veuillez saisir les informations d'une personne :\n\n");
	saisirPersonne(&personne);
	
	printf("\nVoici les informations de la personne saisie :\n\n");
	afficherPersonne(personne);
	
	printf("\n\n");
	return 0;
}
