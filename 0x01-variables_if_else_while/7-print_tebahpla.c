#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	char letas;

	for (letas = 'z' ; letas >= 'a' ; letas--)
	{
	putchar(letas);
	}
		putchar('\n');
	return (0);
}
