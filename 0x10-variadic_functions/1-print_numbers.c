#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_numbers - prints the arguments with the separator.
  *@separator: the separtor to be printed after the arg.
  *@n: the number of arguments.
  *@...: the arguments.
  *Return: return the sum of the arguments.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	if (separator != NULL)
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%c ", *separator);
		}
	printf("\n");
	va_end(args);
}
