#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	 int numbers;

	 numbers = 0;

	while (numbers <= 9)
	{
		putchar(numbers + 48);
		numbers++;
	}
	putchar('\n');

	return (0);
}
