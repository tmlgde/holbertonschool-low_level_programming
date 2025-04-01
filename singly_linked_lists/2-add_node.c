#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str); // dupliquer la chaine
	new_node->len = strlen(str); // calculer la chaine

	if (new_node->str == NULL) // verifier si la chaine n'est pas nulle
	{
		free(new_node); // libere l'espace si la duplication echoue
		return (NULL); // puis retourner NULL
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
