#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

void args_check(int argc, char *argv[]);
int *mul(char *num1, char *num2);
void print_prod(int *prod, int len);
int main(int argc, char *argv[]);
/**
 * args_check - function checks if the arguments are valid
 * @argc: argument count
 * @argv: argument vector
 *
 * Exit: 98 (on failure)
 */
void args_check(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			exit(98);
		}
	}
}


/**
 * mul - function multiplies two positive numbers
 * @num1: pointer to the first number
 * @num2: pointer to the second number
 *
 * Return: product of the multiplication (success)
 */
int *mul(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), *prod;
	int i, j, k = 0, prod_digit;

	prod = malloc(sizeof(int) * (len1 + len2));

	if (prod == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			prod_digit = (num1[i] - '0') * (num2[j] - '0') + k;
			k = prod_digit / 10;
			prod[i + j + 1] = prod_digit % 10;
		}
		if (k > 0)
		{
			prod[i + len2] = k;
			k = 0;
		}
	}
	return (prod);
}


/**
 * print_prod - function prints product of the two positive integers
 * @prod: product of the two integers
 * @len: length of the product
 *
 * Return: 0 (success)
 */
void print_prod(int *prod, int len)
{
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(prod[i] + '0');
	}
	_putchar('\n');
}


/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector pointing to type char
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int *prod;

	args_check(argc, argv);

	prod = mul(argv[1], argv[2]);

	if (prod == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	print_prod(prod, strlen(argv[1]) + strlen(argv[2]));
	free(prod);

	return (0);
}
