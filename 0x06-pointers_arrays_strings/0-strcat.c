#include "main.h"

/**
 * _strcat - function points to the type char & concatenates two strings
 * @dest: the first string that is involved in the concatenation
 * @src: the second string that is involved in the concatenation
 *
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; src[j] != '\0'; j++)
	{

	}

	for (len = 0; len <= j; len++)
	{
		dest[i + len] = src[len];
	}

	return (dest);
}
