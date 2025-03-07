#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two integers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;

	printf("%d\n", k);
	return (0);

}
