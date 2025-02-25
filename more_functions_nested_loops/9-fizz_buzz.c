#include <stdio.h>

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 && 3 == 0)
		{
			printf("Fizz Buzz ");
		}
		if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", a);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
