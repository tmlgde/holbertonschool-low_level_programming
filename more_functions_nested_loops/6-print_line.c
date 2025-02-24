#include "main.h"
#include <stdio.h>

/**
 * print_line - Affiche une ligne droite composée de '_' selon le nombre n.
 * @n: Le nombre de fois que le caractère '_' doit être imprimé.
 *
 * Description: Cette fonction imprime une ligne droite de caractères '_',
 * suivie d'un saut de ligne. Si n est 0 ou inférieur, seul un saut de ligne
 * est imprimé.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar ('\n');	
}
