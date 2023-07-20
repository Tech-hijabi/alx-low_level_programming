#include <stdio.h>

/**
 * main -entry point
 *
 * Description: function prints the sum of all multiples of 3 & 5 before 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int sum = 0;
	int i = 3;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
