#ifndef __DATE_H__
#define __DATE_H__


typedef struct Date
{
	int jour;
	int mois;
	int an;
} Date;



void saisirDate(Date* d);


void afficherDate(Date d);

#endif
