#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int data = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		data++;
	}

	return (data);
}
