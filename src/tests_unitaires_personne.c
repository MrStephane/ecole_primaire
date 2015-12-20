#include <stdio.h>

#include "personne.h"


int main()
{
	Personne personne;
	
	
	printf("Veuillez saisir les informations d'une personne :\n\n");
	saisirPersonne(&personne);
	
	printf("\nVoici les informations simple de la personne saisie :\n\n");
	afficherPersonne(personne);
	
	printf("\nVoici les informations detaille de la personne saisie :\n\n");
	afficherDetailPersonne(personne);
	
	printf("\n\n");
	return 0;
}
