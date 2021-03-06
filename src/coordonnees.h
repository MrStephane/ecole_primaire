#ifndef __COORDONNEES_H__
#define __COORDONNEES_H__


#define TAILLECHAINE 20
#define CODEPOSTAL 6
#define TAILLENUMEROTEL 11


typedef struct Coordonnees
{
	char lieuDit[TAILLECHAINE];
	int numVoie;
	char rue[TAILLECHAINE];
	int numAppart;
	char codePostal[CODEPOSTAL];
	char ville[TAILLECHAINE];
	char pays[TAILLECHAINE];
	char numeroTel[TAILLENUMEROTEL];
} Coordonnees;


void saisirCoordonnees(Coordonnees* coordonnees);


void afficherCoordonnees(Coordonnees coordonnees);


void viderBuffer(void);

#endif
