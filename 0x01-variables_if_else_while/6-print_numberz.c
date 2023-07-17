#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	 int numberz;

	 numberz = 0;

	while (numberz <= 9)
	{
		putchar(numberz + 48);
		numberz++;
	}
	putchar('\n');

	return (0);
}
