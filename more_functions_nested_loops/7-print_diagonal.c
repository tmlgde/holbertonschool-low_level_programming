#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Affiche une diagonale de caractères \ sur le terminal.
 * @n: Le nombre de fois que \ doit être imprimé sur la diagonale.
 *
 * Description: Cette fonction imprime une diagonale de caractères \,
 * chaque ligne ayant un nombre croissant d'espaces avant le caractère \.
 * Si n est inférieur ou égal à 0, un seul saut de ligne est imprimé.
 */

void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
		_putchar('\n');
	else
{
	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
