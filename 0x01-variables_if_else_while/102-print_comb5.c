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
	int o = 0;
	int p = 1;

	while (m <= 9)
	{
		while (n <= 9)
		{
			while (o <= 9)
			{
				while (p <= 9)
				{
					if (m != n || o != p)
					{
						putchar(m + 48);
						putchar(n + 48);
						putchar(' ');
						putchar(o + 48);
						putchar(p + 48);

						if (m != 9 || n != 8 && o != 9 || p != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					p++;
				}
				p = o + 1;
				o++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');

	return (0);
}
