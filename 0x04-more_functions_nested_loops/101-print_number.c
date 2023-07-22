#include "main.h"

/**
 * print_number - function prints an integer
 * @n: the integer being printed
 *
 * Return: 0 "(success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

