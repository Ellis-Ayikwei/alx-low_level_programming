#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements
 *		in a linked list_t list
 * @h: The head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */



size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		count++;
		h = h->next;
	}

	return (count);
}

