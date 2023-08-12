#include <stdlib.h>
#include <string.h>
#include "main.h"

int min(int a, int b);
/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the size in bytes of the newly allocated memory block
 *
 * Return: pointer to the new memory block (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_mem = malloc(new_size);

	if (new_mem == NULL)
		return (NULL);

	memcpy(new_mem, ptr, min(old_size, new_size));
	free(ptr);

	return (new_mem);
}


/**
 * min - function produces the minimum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the smaller integer
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
