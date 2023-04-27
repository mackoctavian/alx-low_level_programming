#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t.
 * @head: A pointer the head of the list_t.
 * @str: The string to be added to the list_t.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *element, *end;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(element);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	element->str = dup;
	element->len = len;
	element->next = NULL;

	if (*head == NULL)
		*head = element;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = element;
	}

	return (*head);
}
