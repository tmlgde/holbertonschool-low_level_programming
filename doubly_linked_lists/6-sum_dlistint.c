#include "lists.h"
/**
 * sum_dlistint - Sums all the data (n) in a doubly linked list.
 * @head: Pointer to the first node.
 * Return: Sum of all data, or 0 if the list is empty.
 */
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
