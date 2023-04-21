#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
  *array_iterator - xecutes a function given
  *as a parameter on each element of an array.
  *@array: the array
  *@size: the size of the array
  *@action:the pointer to the function tto use
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
