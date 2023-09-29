#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index at which the is set
 *
 * Return: 1 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rep;

	if (index >= sizeof(n) * 8)
		return (-1);
	rep = 1UL << index;
	*n |= rep;

	return (1);
}
