#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
  *print_name - prints a name.
  *@name: the name to be printed.
  *@f: the char pointer.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
