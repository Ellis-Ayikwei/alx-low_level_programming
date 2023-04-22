#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sums all the aguemnets
  *@n: the number of arguments.
  *@...: the arguments.
  *Return: return the sum of the arguments.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
		for (i = 0 ; i < n ; i++)
		{
			sum += va_arg(args, int);
		}
	va_end(args);
	return (sum);
}
