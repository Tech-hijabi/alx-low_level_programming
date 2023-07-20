#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: function prints 10times the numbers from 0 to 14
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int a;
	int repeat = 1;

	while (repeat <= 10)
	{
		a = 0;

		while (a <= 14)
		{
			if (a >= 10)
			_putchar('1');
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		repeat++;
	}
}
