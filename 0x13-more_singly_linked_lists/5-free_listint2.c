#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: A pointer to the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (**head).next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
