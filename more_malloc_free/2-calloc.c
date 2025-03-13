#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau d'éléments et initialise à 0.
 * @nmemb: Nombre d'éléments.
 * @size: Taille de chaque élément.
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL en cas d'échec.
 */
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
	
