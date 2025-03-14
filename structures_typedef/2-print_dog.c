#include "dog.h"
#include <stddef.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}

		if (d->age < -1 )
		{
			printf("Age: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %.1f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
