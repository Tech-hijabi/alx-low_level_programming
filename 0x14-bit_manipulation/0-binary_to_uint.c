#include "main.h"

/**
 * binary_to_uint - function converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val = (val << 1) | (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (val);
}
