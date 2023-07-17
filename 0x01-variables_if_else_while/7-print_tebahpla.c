#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Description: the main function is printing alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
