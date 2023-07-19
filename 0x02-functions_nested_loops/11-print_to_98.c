#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints all natural numbers from n to 98
 * @n: the number that the function starts printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
			i--;
		}
	}
}
