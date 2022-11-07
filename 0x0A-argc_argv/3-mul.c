#include <stdio.h>
#include <stdlib.h>
/**
 * main - mian entry
 * @argc: the input number
 * @argv: the container to keep the arguments
 *
 * Return: 0(suceess)
 */
int main(int argc, char *argv[])
{
	int product = 1, i;

	if (argc != 3 )
	{
		printf("Error");
		return (1);	
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}

	return (0);
}
