#include "main.h"

/**
 * print_number - function prints an integer
 * @n: represents the numbers given in the main function
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i < 10)
	{
		_putchar(i + '0');
	}
	else
	{
		print_number(i / 10);
		_putchar(i % 10 + '0');
	}
}
