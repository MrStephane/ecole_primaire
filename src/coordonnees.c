#include <stdio.h>

#include "coordonnees.h"


void saisirCoordonnees(Coordonnees* coordonnees)
{
	char estUnLieuDit, estUnImmeuble;
	
	
	printf("S'agit-il d'un lieu dit ? (O/n) ");
	scanf("%c", &estUnLieuDit);
	viderBuffer();
	
	switch(estUnLieuDit)
	{
		case 'O':
		case 'o':
			printf("Lieu dit : ");
			scanf("%s", coordonnees->lieuDit);
			viderBuffer();
			// Si il s'agit d'un lieu dit alors on met le numero de rue et d'appartement à 0 et un caractère de fin de chaine au début du champ rue
			coordonnees->numVoie = 0;
			coordonnees->rue[0] = '\0';
			coordonnees->numAppart = 0;
			break;
			
		case 'N':
		case 'n':
			printf("Numero de voie : ");
			scanf("%d", &coordonnees->numVoie);
			viderBuffer();
			printf("Rue : ");
			scanf("%s", coordonnees->rue);
			viderBuffer();
			
			// Si il n'y a pas de lieu dit dans les coordonnées alors on met un caractère de fin de chaine sur la première case.
			coordonnees->lieuDit[0] = '\0';
			
			printf("S'agit-il d'un immeuble ? (O/n) ");
			scanf("%c", &estUnImmeuble);
			viderBuffer();
			
			switch(estUnImmeuble)
			{
				case 'O':
				case 'o':
					printf("Numero d'appartement : ");
					scanf("%d", &coordonnees->numAppart);
					viderBuffer();
					break;
				case 'N':
				case 'n':
					// Si il n'y a pas d'appartement alors on met son numéro à 0
					coordonnees->numAppart = 0;
					break;
				default:
					printf("Erreur de saisie.\n");
			}
			break;
			
		default:
			printf("Erreur de saisie.\n");
	}
	
	printf("Code postal : ");
	scanf("%s", coordonnees->codePostal);
	viderBuffer();
	
	printf("Ville : ");
	scanf("%s", coordonnees->ville);
	viderBuffer();
	
	printf("Pays : ");
	scanf("%s", coordonnees->pays);
	viderBuffer();
	
	printf("Numero de telephone : ");
	scanf("%s", coordonnees->numeroTel);
	viderBuffer();
}


void afficherCoordonnees(Coordonnees coordonnees)
{
	// On choisie entre l'affichage du lieu dit ou du numero de voie et de la rue
	if (coordonnees.lieuDit[0] != '\0')
		printf("%s\n", coordonnees.lieuDit);
	else
		printf("%d rue %s\n", coordonnees.numVoie, coordonnees.rue);
	
	// On affiche le numéro d'appartement s'il y en a un
	if (coordonnees.numAppart != 0)
		printf("Appartement %d\n", coordonnees.numAppart);
	
	printf("%s %s\n", coordonnees.codePostal, coordonnees.ville);
	printf("%s\n", coordonnees.pays);
	printf("\nTel: %s", coordonnees.numeroTel);
}


void viderBuffer(void)
{
	char c;
	while((c=getchar()) != '\n');
}
