#include "lists.h"
#include <stdlib.h>

/**
* free_list - create a function that free a list.
* @head: pointer to list.
*/

void free_list(list_t *head)
{
	list_t *vartemp;

	while (head != NULL)
	{
		vartemp = head;
		head = head->next;
		free(vartemp->str);
		free(vartemp);
	}
}
