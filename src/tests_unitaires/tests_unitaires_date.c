#include <stdio.h>
#include <stdlib.h>

#include "../date.h"



int main()
{
	Date d;


	printf("\nVeuillez saisir une date (jj/mm/aaaa) : ");
	saisirDate(&d);
	printf("\n\n");
	printf("Vous avez saisi la date ");
	afficherDate(d);
	printf("\n\n");

	return 0;
}
