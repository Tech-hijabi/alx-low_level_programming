#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && j == 0; i++)
	{
		j = s1[i] - s2[i];
	}

	return (j);
}
