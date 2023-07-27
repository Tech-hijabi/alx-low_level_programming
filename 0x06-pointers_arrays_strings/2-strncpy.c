#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes of string
 *
 * Return: dest (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
