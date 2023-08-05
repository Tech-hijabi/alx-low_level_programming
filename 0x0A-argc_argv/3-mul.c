#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: the argument vector
 *
 * Return: 0 (success) and 1 (if error occurs)
 */
int main(int argc, char *argv[])
{
	int m1 = 0, m2 = 0, mul;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		mul = m1 * m2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
