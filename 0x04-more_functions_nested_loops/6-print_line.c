#include "main.h"

/**
 * print_line - function draws a straight line in the terminal using _
 *@n: is the number of times _ is printed
 *
 * Return: 0 (success)
 */
void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
