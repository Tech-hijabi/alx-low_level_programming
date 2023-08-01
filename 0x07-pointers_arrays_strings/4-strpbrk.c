#include "main.h"

/**
 * _strpbrk - function searches a string for any set of byte
 * @s: a pointer to the string being searched
 * @accept: a pointer to the other string
 *
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, n;

	while (s[i] != '\0')
	{
		n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
