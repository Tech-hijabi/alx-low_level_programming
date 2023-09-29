#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 (big endian)  or 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr_to_byte;

	ptr_to_byte = (unsigned char *)&num;

	return (*ptr_to_byte == 1);
}
