#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100, but for multiples of
 * 3, print "Fizz" instead of the number, and for multiples of 5,
 * print "Buzz". For numbers that are multiples of both 3 and 5,
 * print "Fizz Buzz". Otherwise, print the number itself.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
		{
			printf("Fizz Buzz");
		}
		if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
