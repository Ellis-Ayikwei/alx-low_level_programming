#include "main.h"
#include <stdio.h>
/**
* print_chessboard - prints a chessboaord taking the array size
*by itself
*@a: the array to be multiplied
*
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	sum1 = 0;
	sum2 = 0;

	
	for (i = 0 ; i <size ; i++)
	/*for (j = 0 ; j < size ; j++)*/
		{
			sum1 += *(a + i*size + i);
			sum2 += *(a + i*size + (size-i-1));
		}
	printf("%d, %d \n", sum1, sum2);

}
