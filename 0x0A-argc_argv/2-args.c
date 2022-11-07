#include <stdio.h>
/**
 * main - main entry
 * @argc: input argument (number)
 * @argv: the content of the arguments on command line
 *
 * Return: 0(SUCCESS);
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
