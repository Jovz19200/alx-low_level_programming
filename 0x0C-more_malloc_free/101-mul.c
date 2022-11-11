#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include <limits.h>

/**
 * main - return a product of a and b
 * @argc: input
 * @argv: input
 *
 * Return: product
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			printf("Error\n");
			exit(98);
		}
	}
	product = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", product);
	return (0);
}
