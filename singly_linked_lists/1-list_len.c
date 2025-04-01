#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Retourne le nombre d'éléments dans une liste chaînée
 * @h: Pointeur vers le premier élément de la liste
 *
 * Return: Nombre d'éléments dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
