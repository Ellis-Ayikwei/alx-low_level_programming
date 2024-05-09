#include "search_algos.h"
/**
  * recursive_binary_search - Searches for a value in a sorted list.
  * @array: A pointer to the first element of the array to search.
  * @low: the lower index
  * @high: The upper index.
  * @value: The value to search for.
  *
  * Return: If high is less than, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = low + (high - low) / 2;
	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (recursive_binary_search(array, low, mid, value));
	return (recursive_binary_search(array, mid + 1, high, value));

}
/**
  * advanced_binary - Searches for a value in a sorted list
  *                    using the recursive binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int advanced_binary(int *array, size_t size, int value)
{
	size_t high, low;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;
	low = 0;
	return (recursive_binary_search(array, low, high, value));

}
