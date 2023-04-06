#include "main.h"
#include <string.h>
/**
* _pow_recursion- finds the power of x by y
*@x:the number to be checked
*@y: the exponent
*Return: -1 whne the expo is less rthan 0
*1 when its 0 and x by the expo
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);
	return (x);
}
