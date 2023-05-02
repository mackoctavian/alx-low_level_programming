/*
 * Author: Mack Octavian
 * File: 4-free_listint.c
 */
#include "lists.h"

/**
  * free_listint - Frees the listint_t heap memory
  * @head: A pointer to listint_t struct.
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
