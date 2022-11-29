#include "main.h"
#include <stdio.h>
/**
 * _strdup - function to return the pointer to the string
 * @str: input string
 * Return: returns a pointer to the input string
 */
char *_strdup(char *str)
{
	char *container;
	int a, len = strlen(str);

	if (str == NULL)
		return (NULL);

	container = malloc(sizeof(char) * (len + 1));
	if (container == NULL)
	{
		printf("failed to allocate the memory");
		return (1);
	}

	for (a = 0; a < len; a++)
	{
		container[a] = str[a];
	}
	container[a] = '\0';
	return (container);
}
