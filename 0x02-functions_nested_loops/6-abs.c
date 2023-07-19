#include "main.h"

/**
 * _abs - entry point
 * @n: the number whose absolute value is computed
 *
 * Description: function computes the absolute value of an integer
 *
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
