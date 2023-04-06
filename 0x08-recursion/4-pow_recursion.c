#include "main.h"
#include <string.h>
/**
* factorial- prints the factorial of a number
*@n: the string whos legnth will be printed
*Return: 0 when n is less that 0 ,
*1 when n is 0 and the factprial of n
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if ( y == 0 )
		return (1);

	x = x * _pow_recursion(x,y-1);
	return (x);
}
