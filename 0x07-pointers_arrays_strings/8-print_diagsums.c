#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints a  the sum
*of the diagonal in an array
*@a: the array whos diagonal will be added
*@size: is the size of the array
*
*/
void print_diagsums(int *a, int size)
{
	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
