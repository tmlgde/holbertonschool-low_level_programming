#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Libère une liste doublement chaînée
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Description: Cette fonction parcourt la liste chaînée et libère
 *              chaque nœud un par un pour éviter les fuites de mémoire.
 */
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
