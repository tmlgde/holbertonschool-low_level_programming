#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - Crée un tableau d'entiers allant de `min` à `max`.
 * @min: La valeur minimale du tableau.
 * @max: La valeur maximale du tableau.
 *
 * Return: Pointeur vers le tableau créé, ou NULL si l'allocation échoue
 * ou si `min` est supérieur à `max`.
 */
int *array_range(int min, int max)
{
	int *tableau;
	int i;

	if (min > max)
		return (NULL);

	tableau = malloc((max - min + 1) * (sizeof(int)));

	if (tableau == 0)
		return (NULL);

	for (i = 0; i < (max - min); i++)
		tableau[i] = min + i;

	return (tableau);
}
