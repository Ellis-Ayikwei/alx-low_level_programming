#include "main.h"
/**
 * void swap_int - swapes the inputs of a given numbers 
 *@a: the  value to be checked 
*@b: the second value to be checked 
*by taking the urinary of the input and then
*pointing to its value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int u ;
	u = *a ;
	*a = *b ;
	*b = u ;	
}
