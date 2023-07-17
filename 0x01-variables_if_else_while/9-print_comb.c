#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int nums;

	nums = 0;

	while (nums <= 9)
	{
		putchar(nums + 48);
		nums++;

		if (nums != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
