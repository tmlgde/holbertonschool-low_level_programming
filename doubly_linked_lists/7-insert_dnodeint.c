#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at a given index.
 * @h: Pointer to the head of the list.
 * @idx: Index where the node should be inserted.
 * @n: Value of the new node.
 * 
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *vartemp = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (!vartemp->next)
	{
		return (add_dnodeint_end(h, n));
	}

	if (!vartemp)
	{
		return (NULL);
	}

	while (i < idx - 1 && vartemp != NULL)
	{
		vartemp = vartemp->next;
		i++;
	}

	newnode->next = vartemp->next;
	newnode->prev = vartemp;
	vartemp->next->prev = newnode;
	vartemp->next = newnode;
	return (newnode);
}
