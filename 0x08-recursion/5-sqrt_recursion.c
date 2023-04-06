#include "main.h"
#include <math.h>
/**
* savior - checks the input from n to i
*@n: is multiplied by itself and checked against the i
*@i: is the number to check if the square of i equals it
*Return: -1 if the root is not bnatural
*/

int savior(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (savior(n + 1, i));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (savior(1, n));
}

