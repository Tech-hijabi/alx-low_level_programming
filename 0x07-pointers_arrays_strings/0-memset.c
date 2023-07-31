#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: pointer to the memory area that will be filled
 * @b: the constant byte that is used to fill the memory area
 * @n: the number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *m_area = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (m_area);
}

