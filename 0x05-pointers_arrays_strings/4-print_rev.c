#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: the pointer pointing to the string
 *
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse] != '\0')
	{
		reverse++;
	}

	while (reverse >= 0)
	{
		_putchar(s[reverse]);
		s--;
	}
	_putchar('\n');
}
