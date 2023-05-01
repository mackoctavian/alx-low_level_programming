/*
  * Author: Mack Octavian
  * File: 0-print_listint.c
  * Description: a function that prints all the elements
  *	of a listint_t list
  */
#include "lists.h"

/**
  * print_listint - a function that prints all the elements
  *		    of a listint_t listof.
  * @h: A Pointer to the listint_t struct.
  *
  * Return: the number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
		printf("%d\n", h->n);
	}
	return (count);
}
