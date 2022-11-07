#include <stdio.h>
/**
 * main - main entry
 * @argc: integer to count number of inputs argument on command line
 * @argv: array containing input arguments on commandline
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
