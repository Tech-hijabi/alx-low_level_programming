#include <stdio.h>

/**
 * main - entry point
 *
 * Description: main function is printing out numbers in base 16 in lowercase
 *
 * Return: 0 (for success)
 */
int main(void)
{
	int hex_dec = 0;

	while (hex_dec <= 15)
	{
		putchar(hex_dec <= 9 ? hex_dec + 48 : hex_dec - 10 + 'a');
		hex_dec++;
	}
	putchar('\n');

	return (0);
}
