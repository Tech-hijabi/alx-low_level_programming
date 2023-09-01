#include "main.h"

/**
 * flip_bits - function returns number of bits flipped to replace numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val > 0)
	{
		count += xor_val & 1;
		xor_val >>= 1;
	}
	return (count);
}
