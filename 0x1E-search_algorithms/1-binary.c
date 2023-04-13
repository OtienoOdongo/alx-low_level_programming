#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - function using binary search algorithm to search
 * @value: the value to be searched
 * @size: the number of elements in an array
 * @array: pointer to the first element of the array
 *
 * Return: index of where the value searched is located
 * or -1 in cases where the array is NULL or not present
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int mid = 0;

	while (left < right)
	{
		mid = (right - left) / 2 + left;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

