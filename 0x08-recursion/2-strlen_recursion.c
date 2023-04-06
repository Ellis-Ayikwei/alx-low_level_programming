#include "main.h"
#include <string.h>
/**
* _strlen_recursion - prints a the legnth of a string
*@s: the string whos legnth will be printed
*Return: the of string
*/
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
		_strlen_recursion(s + 1);
		n = strlen(s);
	return (n);
}
