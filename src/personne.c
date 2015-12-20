#include <stdio.h>

#include "personne.h"



void saisirPersonne(Personne* personne)
{
	printf("Nom : ");
	scanf("%s", personne->nom);
	viderBuffer();
	
	printf("Prenom : ");
	scanf("%s", personne->prenom);
	viderBuffer();
	
	printf("Garcon (g) / Fille (f) : ");
	scanf("%c", &personne->genre);
	viderBuffer();
	
	printf("Date de naissance (jj/mm/aaaa) : ");
	saisirDate(&personne->dateDeNaissance);
	
	printf("Age : ");
	scanf("%d", &personne->age);
	viderBuffer();
	
	printf("\n\nCoordonnees :\n\n");
	saisirCoordonnees(&personne->coordonnees);
}


void afficherPersonne(Personne personne)
{
	printf("| %s %s\n", personne.nom, personne.prenom);
	printf("| Nee le ");
	afficherDate(personne.dateDeNaissance);
	printf(" (%d an%s)\n", personne.age, personne.age > 1 ? "s" : "");
	printf("| %s\n|\n", personne.genre == 'g' ? "Homme" : "Femme");
	printf("| Coordonnees :\n|\n");
	afficherCoordonnees(personne.coordonnees);
	printf("\n");
}
