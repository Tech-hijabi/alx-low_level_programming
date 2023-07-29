#include "main.h"

/**
 * rot13 - function encodes a string using rot13
 * @s: pointer to the string
 *
 * Return: modified string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char s_alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s_rot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 52)
		{
			if (s[i] == s_alpha[j])
			{
				s[i] = s_rot[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
