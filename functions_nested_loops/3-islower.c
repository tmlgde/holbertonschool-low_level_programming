#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
