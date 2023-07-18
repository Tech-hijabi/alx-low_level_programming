#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function printing two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int m = 0;
	int n = 0;

	while (m <= 99)
	{
		while (n <= 99)
		{
			if (m < n)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);

				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');

	return (0);
}
