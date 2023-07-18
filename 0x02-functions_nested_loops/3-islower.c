#include "main.h"

/**
 * _islower - entry point
 * @c: the character that is checked
 *
 * Description: function checks for lowercase character
 *
 * Return: 1 (if lowercase) and 0 (if otherwise)
 */
int _islower(int c)
{
	int lower_c = 'a';

	while (lower_c <= 'z')
	{
		if (c == lower_c)
		{
			return (1);
		}
		lower_c++;
	}
	return (0);
}
