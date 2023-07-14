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

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
