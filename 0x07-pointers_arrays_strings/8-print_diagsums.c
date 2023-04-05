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
	int i;
	long int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	
	for (i = 0 ; i < size ; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%ld, %ld \n", sum1, sum2);

}
