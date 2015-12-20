#include <stdio.h>

#include "eleve.h"



void saisirEleve(Eleve* e)
{
	int i;
	
	
	saisirPersonne(&e->eleve);
	printf("\n\n");
	printf("Nombre de tuteur legaux (max. 2) : ");
	scanf("%d", &e->nbTuteurs);
	viderBuffer();
	
	printf("\n\n");
	for (i = 0; i < e->nbTuteurs; ++i)
	{
		printf("Tuteur numero %d :\n\n", i+1);
		saisirPersonne(&e->tuteurs[i]);
		printf("\n\n\n");
	}
}


void afficherEleve(Eleve e)
{
	afficherPersonne(e.eleve);
	printf("\n\n");
}


void afficherDetailEleve(Eleve e)
{
	char affichageDetaille;
	
	int i;
	
	
	afficherDetailPersonne(e.eleve);
	printf("\n\n");
	printf("Voulez-vous un affichage detaille des tuteurs s'il y en a ? (O/n) ");
	scanf("%c", &affichageDetaille);
	viderBuffer();
	
	printf("\n");
	
	switch(affichageDetaille)
	{
		case 'O':
		case 'o':
			for (i = 0; i < e.nbTuteurs; ++i)
			{
				printf("Tuteur numero %d :\n\n", i+1);
				afficherDetailPersonne(e.tuteurs[i]);
				if (i != e.nbTuteurs)
					printf("\n\n");
			}
			break;
		case 'N':
		case 'n':
			for (i = 0; i < e.nbTuteurs; ++i)
			{
				printf("Tuteur numero %d :\n\n", i+1);
				afficherPersonne(e.tuteurs[i]);
				if (i != e.nbTuteurs)
					printf("\n\n");
			}
			break;
		default:
			printf("Erreur de saisie.\n");
	}
	printf("\n");
}
