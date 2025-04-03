#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *vartemp;

	while (head != NULL)
	{
		vartemp = head;
		head = head->next;
		free(vartemp);
	}
}
