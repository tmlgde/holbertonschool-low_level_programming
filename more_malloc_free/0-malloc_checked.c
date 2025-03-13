#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
