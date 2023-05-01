/*
 * Author: Mack Octavian
 * File: 1-listint_len.c
 */

#include "main.h"

/**
  * listint_len - function that returns the number of elements
  *		  in a linked list listint_t.
  * @h: A pointer to struct listint_t.
  *
  *Return: number of elements in a linked listint_t.
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
