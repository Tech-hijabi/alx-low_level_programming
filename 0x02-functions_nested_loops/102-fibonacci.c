#include <stdio.h>

/**
 * main -entry point
 *
 * Description: function prints the first 50 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 3, _1st = 1, _2nd = 1, next;

	printf("%d, %d, ", _1st, _1st);

	while (i <= 50)
	{
		next = _1st + _2nd;
		printf("%d, ", next);
		_1st = _2nd;
		_2nd = next;
		i++;
	}
	printf("\n");

	return (0);
}
