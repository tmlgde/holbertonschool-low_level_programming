#include "main.h"
/**
 * print_to_98 - printf nb
 * @n: nb  de depart
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
