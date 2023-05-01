/*
 * Author: Mack Octavian
 * File: 3-add_nodeint_end.c
 */
#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: A pointer to struct listint_t.
  * @n: Data to be added to node.
  *
  * Return: The address of the new element, or NULL if it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	/*Allocating memory for the node*/
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		for (;; end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
