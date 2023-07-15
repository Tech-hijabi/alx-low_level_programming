#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Description: the main funtion is printing alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
