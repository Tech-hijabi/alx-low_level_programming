#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			{
			putchar(alpha);
			}
		alpha++;
	}
	putchar('\n');

	return (0);
}
