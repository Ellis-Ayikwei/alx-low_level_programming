#include "main.h"
#include <string.h>
/**
* factorial- prints the factorial of a number
*@n: the string whos legnth will be printed
*Return: 0 when n is less that 0 ,
*1 when n is 0 and the factprial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		n = n * factorial(n - 1);
	return (n);
}
