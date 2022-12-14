#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -folds arguments into a  string
 * @ac: number of arguments
 * @av: arguments
 * Return: stirng
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, n = 0;
	char *cont;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	cont = malloc(sizeof(char) * (len + 1));
	if (cont == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			cont[n] = av[i][j];
			n++;
		}

		if (cont[n] == '\0')
		{
			cont[n++] = '\n';
		}
	}
	return (cont);
}
