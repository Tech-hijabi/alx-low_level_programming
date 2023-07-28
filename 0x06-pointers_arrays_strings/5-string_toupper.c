#include "main.h"

/**
 * string_toupper - function changes all lowercases of string to uppercases
 * @s: string that is changed
 *
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
