#include "main.h"
#include <stdio.h>
/**
*print_array - checks a character and reverses it
*@a: is the pointer of the array a
*@n: is the size of the array
*return: Always 0.
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j  < n ; j++)
	{
		printf("%d", a[j]);
		if (a[j] != n)
		{
			if (j < n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
