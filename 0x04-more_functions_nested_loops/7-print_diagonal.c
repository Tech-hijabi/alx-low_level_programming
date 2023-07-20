#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on the terminal
 *@n: is the number of times \ is printed
 *
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n <= 0)
		_putchar('\n');

	while (a < n)
	{
		b = 0;

		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
