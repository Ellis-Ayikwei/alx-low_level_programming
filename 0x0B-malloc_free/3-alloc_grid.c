#include "main.h"
#include <stdlib.h>


/**
*alloc_grid - returns a pointer to a 2
*dimensional array of integers.
*@width: the width.
*@height: the height
*Return: NUll if both h and w is less
*than zero of negative.
*/


int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;
	int w = width;
	int h = height;

	if (w <= 0 || h <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * h);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < h; j++)
	{
		a[j] = malloc(sizeof(int) * w);

		if (a[j] == NULL)
		{
			for (; j >= 0; j--)
				free(a[j]);

			free(a);
			return (NULL);
		}
	}

	for (j = 0; j < h; j++)
	{
		for (i = 0; i < w; i++)
			a[j][i] = 0;
	}

	return (a);
}

