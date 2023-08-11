#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: number of bytes of each of the element
 *
 * Return: pointer to the array (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar_ptr = malloc(nmemb * size);

	if (ar_ptr == NULL)
		return (NULL);

	memset(ar_ptr, 0, (nmemb * size));

	return (ar_ptr);
}
