#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (for success), while any other value (for failure)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
