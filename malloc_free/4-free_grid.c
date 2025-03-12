#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Libère la mémoire allouée pour une grille 2D.
 *
 * @grid: Le tableau 2D à libérer.
 * @height: La hauteur de la grille.
 *
 * Description: Cette fonction libère la mémoire allouée pour chaque ligne du tableau
 * 2D, puis libère également la mémoire pour le tableau principal qui contient les
 * pointeurs vers les lignes.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
