#include "main.h"

/**
* print_sign - Print and checks if a character is negative ,zero ,or positive.
* * @n: The character to be checked.
*
* Return: 1 if number is greater than zero
*-1 if the number is less than zero,
*0 if the num ber is 0.
*/
int  print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
	}
	else if (n < 0)
	{
		_putchar (45);
	}
	else
	{
		_putchar  (48);
	}
	return(0);
}
