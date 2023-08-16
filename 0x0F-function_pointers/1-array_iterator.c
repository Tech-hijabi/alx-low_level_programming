#include "function_pointers.h"

/**
 * array_iterator - function iterates an array of integers
 * @array: the array to iterate over
 * @size: size of the array
 * @action: the function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
