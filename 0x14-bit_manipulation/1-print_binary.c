#include "main.h"

/**
 * print_binary - function prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int rep = 0, i;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
			rep = 1;
		}
		else if (rep)
			printf("0");
	}
	if (!rep)
		printf("0");
}
