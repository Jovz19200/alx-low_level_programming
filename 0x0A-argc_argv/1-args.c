#include <stdio.h>
/**
 * main - main entry
 * @argc: input argument number
 * @argv: input argument content
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
