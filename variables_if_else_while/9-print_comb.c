#include <stdio.h>
/**
 * main - Prints a programming quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)

	{
		putchar('0' + a);
		if (a < 9)
		{
		putchar(' ');
		putchar (',');
		}
	}

	putchar('\n');
		return (0);
}
