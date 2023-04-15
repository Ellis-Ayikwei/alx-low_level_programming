#include "main.h"
#include <stdlib.h>

/**
 * create_a - Creates an a of chars and
 * initializes it with a specific char.
 * @size: The size of the a to be initialized.
 * @c: The specific char to intialize the a with.
 *Return: If size == 0 or the function fails - NULL.
 *Otherwise - a pointer to the a.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
