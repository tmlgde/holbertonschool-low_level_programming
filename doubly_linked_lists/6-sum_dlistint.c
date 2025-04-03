#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *vartemp = head;
	int count = 0;

	while (vartemp != NULL)
	{
		count += vartemp->n;
		vartemp = vartemp->next;
	}

	return (count);
}
