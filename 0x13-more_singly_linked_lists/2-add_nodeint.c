/*
 * Author: Mack Octavian
 * File: 2-add_nodeint.c
 */

#include "lists.h"

/**
  * add_nodeint - Adds a new node at the end
  *		      of a listint_t lis.
  * @head - A pointer to the struct listint_t.
  * @n - The data of the node.
  *
  * Return: the address of the new element or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;

		return(new);
	}
}
