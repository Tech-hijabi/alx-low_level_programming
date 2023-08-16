#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: the array to be searched
 * @size: the number of elements in the array
 * @cmp: the function pointer
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
