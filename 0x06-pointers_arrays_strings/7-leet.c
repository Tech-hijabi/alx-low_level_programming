#include "main.h"

/**
 * leet - function encodes a string into 1337(leet)
 * @s: pointer to the string
 *
 * Return: modified string
 */
char *leet(char *s)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
