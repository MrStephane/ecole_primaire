#include <stdio.h>

#include "date.h"



void saisirDate(Date* d)
{
	scanf("%d/%d/%d", &d->jour, &d->mois, &d->an);
}


void afficherDate(Date d)
{
	printf("%.2d/%.2d/%.2d", d.jour, d.mois, d.an);
}
