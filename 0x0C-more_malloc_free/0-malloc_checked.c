#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the amount of memory allocated
 *
 * Return: pointer to the allocated memory (on success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
