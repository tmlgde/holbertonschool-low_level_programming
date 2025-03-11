#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau 2D de dimensions width x height.
 * @width: Nombre de colonnes.
 * @height: Nombre de lignes.
 *
 * Return: Pointeur vers le tableau 2D ou NULL si l'allocation échoue.
 */
int **alloc_grid(int width, int height)
{
	int i, y;
	int **tableau;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tableau = malloc(height * sizeof(int *));
	if (!tableau)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tableau[i] = malloc(width * sizeof(int));
		if (!tableau[i])
		{
			for (y = 0; y < i; y++)
			{
				free(tableau[y]);
			}
			free(tableau);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			tableau[i][y] = 0;
		}
	}
	return (tableau);
}
