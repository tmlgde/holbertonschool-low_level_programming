#include "main.h"
#include <stdio.h>

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

