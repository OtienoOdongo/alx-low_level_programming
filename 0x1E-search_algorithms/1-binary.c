#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - a function that uses binary search in an array
 * @size: number of elements in the array
 * @array: pointer to the first element in the array
 * @value: the searched value in the function
 *
 * Return: 0 (success) or -1 if array is NULL or not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t mid = 0;
	size_t x = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		mid = (l + r) / 2;
		{
		       printf("Searching array: ");
		}
		for (x = l; x < r; x++)
		{
			printf("%i, ", array[x]);
		}
		printf("%d\n", array[x]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
