/*
 * Author: Mack Octavian
 * File: 6-pop_listint.c
 */
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer  of the listint_t list.
 *
 * Return: If the list is empty return 0.
 *         Otherwise - The head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (*head == NULL)
		return (0);

	temp = *head;
	m = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (m);
}
