#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: pointer to the receiving memory area
 * @src: pointer to the memory area the bytes are copied from
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
