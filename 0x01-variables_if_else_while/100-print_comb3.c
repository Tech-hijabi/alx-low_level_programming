#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function printing different combinations of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1 = 0;
	int num2 = num1 + 1;

	while (num1 <= 9)
	{
		putchar(num1 + 48);
		num1++;

		while (num2 <= 9)
		{
			putchar(num2 + 48);
			num2++;

			if (num1 != num2 || (num1 == 0 && num2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
