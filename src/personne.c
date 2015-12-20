#include <stdio.h>

#include "personne.h"



void saisirPersonne(Personne* p)
{
	printf("Nom : ");
	scanf("%s", p->nom);
	viderBuffer();
	
	printf("Prenom : ");
	scanf("%s", p->prenom);
	viderBuffer();
	
	printf("Garcon (g) / Fille (f) : ");
	scanf("%c", &p->genre);
	viderBuffer();
	
	printf("Date de naissance (jj/mm/aaaa) : ");
	saisirDate(&p->dateDeNaissance);
	
	printf("Age : ");
	scanf("%d", &p->age);
	viderBuffer();
	
	printf("\n\nCoordonnees :\n\n");
	saisirCoordonnees(&p->coordonnees);
}


void afficherPersonne(Personne p)
{
	printf("| %s %s\n", p.nom, p.prenom);
	printf("| Nee le ");
	afficherDate(p.dateDeNaissance);
	printf(" (%d an%s)\n", p.age, p.age > 1 ? "s" : "");
	printf("\n");
}


void afficherDetailPersonne(Personne p)
{
	printf("| %s %s\n", p.nom, p.prenom);
	printf("| Nee le ");
	afficherDate(p.dateDeNaissance);
	printf(" (%d an%s)\n", p.age, p.age > 1 ? "s" : "");
	printf("| %s\n|\n", p.genre == 'g' ? "Homme" : "Femme");
	printf("| Coordonnees :\n|\n");
	afficherCoordonnees(p.coordonnees);
	printf("\n");
}
