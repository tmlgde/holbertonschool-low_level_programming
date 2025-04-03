#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un noeud a la fin liste doublement chaînée.
 * @head: Pointeur vers le pointeur du premier nœud de la liste.
 * @n: Valeur du nouveau noeud.
 * Return: Adresse du nouveau noeud, ou NULL si l'ajout a échoué.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}

