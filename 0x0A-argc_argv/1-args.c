#include <stdio.h>
#include "main.h"

/**
 * main - function prints the number of arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: the argument vector
 *
 * Return: 0 (success) and 1 (if failure)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
