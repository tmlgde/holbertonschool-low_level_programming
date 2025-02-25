#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square of size `size`
 * @size: the size of the square to print
 *
 * Description: This function prints a square of `#` characters
 *             with the given size. If the size is less than or equal to 0,
 *             it prints a newline.
 */
void print_square(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
		}
		_putchar('\n');
	}
}
}
