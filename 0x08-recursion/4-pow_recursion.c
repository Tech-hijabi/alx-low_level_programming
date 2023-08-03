#include "main.h"

/**
 * _pow_recursion - function prints the value of x raised to the power of y
 * @x: the base value
 * @y: the exponent
 *
 * Return: the calculated result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
