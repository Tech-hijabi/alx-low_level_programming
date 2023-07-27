#include "main.h"

/**
 * _strncat - function concatenates two strings using n bytes from source code
 * @dest: first string in the destination code
 * @src: second string in the source code
 * @n: number of bytes
 *
 * Return: 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (len = 0; src[len] != 0 && len < n; len++)
	{
		dest[i + len] = src[len];
	}

	return (dest);
}
