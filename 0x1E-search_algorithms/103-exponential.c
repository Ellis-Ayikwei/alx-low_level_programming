#include "search_algos.h"
/**
  * binary_search1 - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search1(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);



	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{

	size_t i = 1, high, low;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
		while (i < size - 1 && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i = i * 2;

		}

	if (array[i] == value)
	{
		return (i);
	}
		high = i < size ? i : size - 1;
		low = i / 2;
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		return (binary_search1(array, low, high, value));
}
