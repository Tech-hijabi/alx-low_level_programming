#include <stdio.h>

/**
 * main -function prints largest prime factor of given number
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int num = 612852475143, val;

	for (val = 3; val < 782849; val = val + 2)
	{
		while ((num % val == 0) && (num != val))
			num = num / val;
	}
	printf("%lu\n", num);

	return (0);
}
