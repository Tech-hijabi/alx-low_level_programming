#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * rand(): source random numbers & gives diff. value each times it's executed
 *
 * Return: zero, 0 (for success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Random number is %d\n", n);

	return (0);
}
