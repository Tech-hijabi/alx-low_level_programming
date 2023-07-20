#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: the ascii character being checked
 *
 * Return: 1 (success) and 0 (otherwise)
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
