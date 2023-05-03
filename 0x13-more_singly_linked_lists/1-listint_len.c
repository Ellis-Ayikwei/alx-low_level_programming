#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number
 * of elements in a linked listint_t list.
 * @h: The head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
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

