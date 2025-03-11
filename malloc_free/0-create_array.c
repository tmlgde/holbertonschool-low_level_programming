#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	return (NULL);

	tab = malloc(size * sizeof(char));

	if (tab == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}

return (tab);
}
