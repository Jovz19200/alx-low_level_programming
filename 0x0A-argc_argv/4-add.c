#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - main entry
 * @argc: input argument number
 * @argv: input argument container
 *
 * Return: 0 always(success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, pos = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (pos < argc)
	{
		for (i = 0; argv[pos][i] != '\0'; i++)
		{
			if (!(isdigit(argv[pos][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[pos]);
		pos++;
	}
	printf("%d\n", sum);
	return (0);
}
