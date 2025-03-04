#include "main.h"
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; *a[i] != '\0'; i++)
	{
		for (j = 0;* a[j] != '\0'; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}
