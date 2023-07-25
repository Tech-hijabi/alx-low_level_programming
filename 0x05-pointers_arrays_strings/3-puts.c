#include "main.h"

/**
 * _puts - function prints a string to the standard output
 * @str: the string that is printed
 *
 * Return: 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
