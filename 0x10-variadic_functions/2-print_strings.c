#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_strings - prints the arguments with the separator.
  *@separator: the separtor to be printed after the arg.
  *@n: the number of arguments.
  *@...: the arguments.
  *Return: return the sum of the arguments.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *j;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(str, char *);

		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
