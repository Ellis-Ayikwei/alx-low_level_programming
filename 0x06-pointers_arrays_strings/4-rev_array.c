#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* reverse_array -  reverses the content of an
*array of integers.
*@a: array to be reversed.
*@n: the number of elemets in the array.
* Return:alwas 0.
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
