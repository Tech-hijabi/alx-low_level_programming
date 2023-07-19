#include "main.h"

/**
 * print_last_digit - entry point
 * @n: the number whose last digit is printed
 *
 * Description: function prints last digit of an integer
 *
 * Return: last digit (success)
 */
int print_last_digit(int n)
{
	int last_dig = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	if (last_dig < 0)
	{
		last_dig = -last_dig;
	}

	_putchar(last_dig + '0');

	return (last_dig);
}
