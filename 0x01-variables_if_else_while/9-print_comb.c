#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	int letas;
	letas = 0;

	while (letas <= 9)
	{
		
		putchar(48 + letas);
		if (letas < 9)
		{
			putchar(',');
			putchar(' ');
		}
			letas++;
	}
		putchar('\n');
	return (0);
}
