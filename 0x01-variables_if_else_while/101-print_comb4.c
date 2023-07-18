#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function printing different combinations of three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 2;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			while (num3 <= 9)
			{
				if (num1 != num2 && num2 != num3)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(num3 + 48);

					if (num1 != 7 || num2 != 8 || num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num3 = num2 + 1;
			num2++;
		}
		num2 = num1 + 1;
		num1++;
	}
	putchar('\n');

	return (0);
}
