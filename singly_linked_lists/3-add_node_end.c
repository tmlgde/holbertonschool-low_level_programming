#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* add_node_end - function that add a nex node aat the list
* @head: head of list
* @str: pointer to string
* Return: address of the new element
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *vartemp;
	unsigned int len = 0;

	vartemp = (*head);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (; str[len]; len++)
		;
		newnode->str = strdup(str);
		newnode->len = len;
		newnode->next = (NULL);

	if ((*head) == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (vartemp->next != NULL)
	{
		vartemp = vartemp->next;
	}
		vartemp->next = newnode;

	return (newnode);
}
