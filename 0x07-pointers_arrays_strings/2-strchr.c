#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer to the string
 * @c: the character that is located
 *
 * Return: NULL (if character is not found)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
