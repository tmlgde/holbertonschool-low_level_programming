#include <stdio.h>
/**
 * main - Prints all command-line arguments
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
