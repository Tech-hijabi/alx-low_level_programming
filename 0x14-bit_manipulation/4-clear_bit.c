#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rep;

	if (index >= sizeof(n) * 8)
		return (-1);
	rep = 1UL << index;
	rep = ~rep;
	*n &= rep;

	return (1);
}
