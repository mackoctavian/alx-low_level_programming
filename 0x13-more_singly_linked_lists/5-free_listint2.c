/*
 * Author: Mack Octavian
 * File: 5-free_listint2.c
 */
#include "lists.h"

/**
  * free_listint2 - Frees listint-t list
  * @head: A pointer to struct listint_t list
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
	}

	head = NULL;
}
