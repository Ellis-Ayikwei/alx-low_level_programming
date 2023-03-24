#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 92227;
        b = 454514184;
        c = 698;

        largest = largest_number(a, b, c);

        printf("%d is the largest number of\n", largest);
	 

        return (0);
}
