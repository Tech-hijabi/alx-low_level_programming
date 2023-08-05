#include <stdio.h>
#include "main.h"

/**
 * main - function prints the arguments passed to it
 * @argc: the number of arguments passed to the program
 * @argv: the argument vector
 *
 * Return: 0 (success) and 1 (if error occurs)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
