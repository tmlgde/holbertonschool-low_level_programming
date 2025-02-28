#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}
	strcpy (dest, src);
	return (dest);
}

