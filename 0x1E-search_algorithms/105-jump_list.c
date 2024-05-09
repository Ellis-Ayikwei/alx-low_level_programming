#include "search_algos.h"
/**
  * jump_list - searches for a value in a sorted list of
  *            integers using the Jump search algorithm.
  * @list: list is a pointer to the head of the list to search in.
  * @size:   is the number of prevs in list.
  * @value: is the value to search for.
  *
  * Return: return a pointer to the first prev where value is located.
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	jump_size = sqrt(size);
	for (prev = current = list; current->index + 1 < size && current->n < value;)
	{
		prev = current;
		for (step += jump_size; current->index < step; current = current->next)
		{
			if (current->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, current->index);

	for (; prev->index < current->index && prev->n < value; prev = prev->next)
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
