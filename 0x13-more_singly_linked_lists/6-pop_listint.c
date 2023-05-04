#include "lists.h"
#include <stdlib.h>

/**
  *pop_listint - deletes the head
  *node of a listint_t linked list
  *
  * @head : the head of the list
  * Return: returns the head node’s data (n)
  */
int pop_listint(listint_t **head)
{	listint_t *tmp;
	int a;

	if (*head == NULL)
		return (0);

	tmp = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (a);
}

