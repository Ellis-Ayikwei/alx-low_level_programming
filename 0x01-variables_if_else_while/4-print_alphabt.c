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

	for (letas = 'a' ; letas <= 'z' ; letas++)
	{
		if (letas != 'e' || letas != 'q')
		{
			putchar(letas);
		}
	}
		putchar('\n');
	return (0);
}
