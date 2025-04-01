#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the list.
 * @str: pointer to the string.
 *
 * Return: adress of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	*head = newnode;

	return (newnode);

}
