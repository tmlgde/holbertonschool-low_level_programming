#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - imprimer l'alphabet x10
 *
 *
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (b = 0; b < 10; b++)

{
	for (a = 'a'; a <= 'z'; a++)

	{
		_putchar(a);
	}
	_putchar('\n');
}
}
