#include "main.h"

/**
 * print_binary - function prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int rep;

	rep = 1UL << (sizeof(n) * CHAR_BIT - 1);

	while (rep > 0)
	{
		if (n & rep)
			printf("1");
		else
			printf("0");
		rep >>= 1;
	}
}
