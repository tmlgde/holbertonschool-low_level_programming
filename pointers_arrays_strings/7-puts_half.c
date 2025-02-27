#include "main.h"
#include "2-strlen.c"

void puts_half(char *str)
{
	int length = _strlen(str);

	if (length % 2 == 0)
	{
		int start = length / 2

		while (str[start])
		{
			_putchar(str[start]);
			start++;
		}
		else if (lenght % 2 = ! 0)
		{
			int n = ((length + 1) / 2)
			while (str[n])
			{
				_putchar(str[n]);
				n++;
				_putchar('\n');
			}
		}
	}
}
