#include <stdio.h>
#include "search_algos.h"

/**
 *linear_search - this function performs linear search in an array
 *@size: number of elements in the array
 *@array: pointer to the first element of the array
 *@value: the value being searched in the array
 *
 * Return: 0 (success) or -1 if value is NULL or  not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%i]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
