#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory, or exit with status 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	char *gigi;

	gigi = malloc(b);

	if (!gigi)
	{
		exit(98);
	}
	return (gigi);
}
