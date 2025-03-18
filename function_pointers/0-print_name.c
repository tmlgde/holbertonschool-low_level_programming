#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{

	if (!f)
	{
		return;
	}

	if (!name)
	{
		return;
	}
	
	f(name);
}
