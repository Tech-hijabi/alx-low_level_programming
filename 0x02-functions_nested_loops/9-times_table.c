#include "main.h"

/**
 * times_table - prints the 9times table
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int a, b, c, d, e;

	a = 0;

	while (a < 10)
	{
		b = 0;

		while (b < 10)
		{
			c = a * b;
			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
