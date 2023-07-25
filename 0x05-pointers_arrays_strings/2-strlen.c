#include "main.h"

/**
 * _strlen - function prints the length of a string
 * @s: the string
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
