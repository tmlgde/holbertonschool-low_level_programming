#include "main.h"
#include <stdio.h>

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
