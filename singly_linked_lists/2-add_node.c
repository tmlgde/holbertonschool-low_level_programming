#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of the list.
 * @head: Pointer to the first element in the list.
 * @str: String to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	if (!str)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
