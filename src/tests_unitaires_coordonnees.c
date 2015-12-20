#include <stdio.h>

#include "coordonnees.h"


int main()
{
	Coordonnees coordonnees;
	
	
	printf("Veuillez saisir les coordonnees de la personne :\n\n");
	saisirCoordonnees(&coordonnees);
	
	printf("\n\nVoici les coordonnees que vous venez de saisir :\n\n");
	afficherCoordonnees(coordonnees);
	
	printf("\n\n");
	return 0;
}