#include "main.h"

/**
 * print_square - function prints a square using #
 * @size: the size of the square printed
 *
 * Return: 0 (success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s = 0;
		int t;

		while (s < size)
		{
			t = 0;

			while (t < size)
			{
				_putchar('#');
				t++;
			}
			_putchar('\n');
			s++;
		}
	}
}
