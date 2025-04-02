#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int data = 0;

	while (h != NULL)
	{
		h = h->next;
		data++;
	}

	return (data);
}
