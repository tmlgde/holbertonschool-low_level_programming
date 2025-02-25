#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Affiche un triangle suivi d'un saut de ligne.
 * @size: La taille du triangle.
 *
 * Description: Cette fonction imprime un triangle de hauteur
 * équivalente à la taille spécifiée par `size`. Si `size` est inférieur
 * ou égal à 1, elle n'affiche qu'un saut de ligne.
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 1)
	{	_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - a - 1); b++)
		{
			_putchar(' ');
		}
		for (b = 0; b < (a + 1); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
