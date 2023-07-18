#include "main.h"

/**
 * _isalpha - entry point
 * @c: the character that is checked
 *
 * Description: function checks for alphabetic character
 *
 * Return: 1 (success) and 0 (if otherwise)
 */
int _isalpha(int c)
{
	int letters = 'a';

	while (letters <= 'z')
	{
		if (c == letters || c == letters + 'A' - 'a')
		{
			return (1);
		}
		letters++;
	}
	return (0);
}
