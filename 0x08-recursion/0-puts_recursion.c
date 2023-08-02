#include "main.h"

/**
 * _puts_recursion - function prints a string using recursion
 * @s: pointer to the string
 *
 * Return: string (success)
 */
void _puts_recursion(char *s)
{
	char i;

	i = *s;

	if (i == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(i);
		_puts_recursion(s + 1);
	}
}
