#include <stdlib.h>
#include "main.h"

/**
 * array_range - function creates an array of integers from min to max
 * @min: the minimum number of elements
 * @max: the maximum number of elements
 *
 * Return: pointer to the created array (success)
 */
int *array_range(int min, int max)
{
	int i, size, *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
