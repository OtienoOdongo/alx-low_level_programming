#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for values in an array of integers
 * @size: number of elements in the array
 * @array: pointer to the first elemet of the array
 * @value: value to be searched
 *
 * Return: first index where the value is located
 * or if value is NULL or not present returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

