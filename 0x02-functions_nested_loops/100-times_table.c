#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the number whose times table is printed
 *
 * Return: 0 (success)
 */
void print_times_table(int n)
{
	int i = n;

	if (!(i > 15 || i < 0))
	{
		int a, b, c, d, e;

		a = 0;

		while (a <= i)
		{
			b = 0;

			while (b <= i)
			{
				c = a * b;
				if (c > i)
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
}
