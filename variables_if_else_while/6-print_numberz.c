#include <stdio.h>
/**
 * main - Prints a programming quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 0; a <= 9; ++a)
	{
		putchar('0' + a);
	}
	putchar('\n');

	return (0);
}
