#include <stdio.h>
/**
 * main - Prints a programming quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	if (a != 'q' && a != 'e')
	{
		putchar(a);
	}
	putchar ('\n');

	return (0);
}
