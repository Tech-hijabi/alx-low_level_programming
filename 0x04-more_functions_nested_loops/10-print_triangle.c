#include "main.h"

/**
 * print_triangle - function prints a triangle using #
 * @size: the size of the triangle printed
 *
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a; /* (a) represents the rows of the triangle */
		int b; /* (b) represents the added spaces before the hashes */

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size - a; b++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
