#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars & initializes it with a
 * specific char
 * @size: the size of memory allocated
 * @c: the character that was initialized
 *
 * Return: NULL (if failure)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
