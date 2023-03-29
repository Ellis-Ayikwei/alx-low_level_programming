#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * void swap_int - swapes the inputs of a given numbers 
 *@a: the  value to be checked 
*@b: the second value to be checked 
*by taking the urinary of the input and then
*pointing to its value
 * Return: Always 0.
 */
int _strlen(char *s)
{	
	int i, b;

	b=0;
	for(i = 0 ; s[i] != '\0' ; i++)
	{
	b +=1;
	}
	return(b);
}
