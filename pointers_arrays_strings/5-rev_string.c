#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int i;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char temp = s[i];
	s[i] = s[j];
	s[j] = temp;

	i++;
	j--;
}
}
