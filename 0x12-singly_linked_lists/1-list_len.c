#include "lists.h"

/**
 * list_len - Finds the number of items in list.
 * @h: The singly linked list_t.
 * Return: The number of items in h.
 */
size_t list_len(const list_t *h)
{
	size_t items = 0;

	while (h)
	{
		items++;
		h = h->next;
	}

	return (items);
}
