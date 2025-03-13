#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *resultat;
	int taille_totale;

	if (!nmemb)
	{
		return (NULL);
	}

	if (!size)
	{
		return (NULL);
	}

	taille_totale = nmemb * size;
	resultat = malloc(taille_totale);

	if (!resultat)
	{
		return (NULL);
	}

	memset(resultat, 0, taille_totale);
	return (resultat);
}
	
