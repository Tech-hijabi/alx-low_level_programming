#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: the pointer pointing to the string
 *
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	r--;

	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
