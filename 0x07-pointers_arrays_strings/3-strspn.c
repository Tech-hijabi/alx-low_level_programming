#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 *
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] != accept[i])
		{
			break;
		}
		i++;
	}
	return (i);
}
