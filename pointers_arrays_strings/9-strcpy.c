#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	
	*dest = '\0';
	}
	return (dest);
}
