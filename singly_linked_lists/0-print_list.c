#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - Affiche les el©e©ments d'une liste cinee
 * @h: Pointeur vers le premier noeud.
 *
 * Return: Nombre total de noeuds.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	count++;
	h = h->next;
	}
	return (count);
}
