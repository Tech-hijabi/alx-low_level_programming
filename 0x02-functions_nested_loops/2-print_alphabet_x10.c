#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: function prints 10times the alphabets in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int repeat = 0;

	while (repeat < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		repeat++;
	}
}
