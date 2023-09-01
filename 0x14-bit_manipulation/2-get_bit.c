#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: number
 * @index: the index at which the value of a bit is returned
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rep;

	if (index >= sizeof(n) * 8)
		return (-1);
	rep = 1UL << index;

	if (n & rep)
		return (1);
	else
		return (0);
}
