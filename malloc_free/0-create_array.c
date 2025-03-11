#include "main.h"
#include <stdlib.h>
/**
 * create_array - Crée un tablea taille donnée, initialisé avec un caract
 *
 * @size: Taille du tableau.
 * @c: Caractère d'initialisation
 *
 * Return: Pointeur vers le tableau, ou NULL en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	return (NULL);

	tab = malloc(size * sizeof(char));

	if (tab == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}

return (tab);
}
