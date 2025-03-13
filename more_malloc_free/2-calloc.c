#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *resultat;
	int taille_totale;
	int i;

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

	for (i = 0; i < taille_totale; i++)
	{
		resultat[i] = 0;
	}

	return (resultat);
}
	
