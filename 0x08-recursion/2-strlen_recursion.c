#include "main.h"

/**
 * _strlen_recursion - function prints the length of a string
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	char i = *s;

	if (i == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
