#include "main.h"

/**
 * _print_rev_recursion - function prints string in reverse
 * @s: pointer to the string
 *
 * Return: 0 (success)
 */
void _print_rev_recursion(char *s)
{
	char i;

	i = *s;

	if (i == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		s--;
		_putchar(i);
	}
}
