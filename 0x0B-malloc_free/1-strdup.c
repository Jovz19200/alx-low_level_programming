#include "main.h"
/**
 * _strdup - function to return the pointer to the string
 * @str: input string
 * Return: returns a pointer to the input string
 */
char *_strdup(char *str)
{
	char *container;
	int a, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	container = malloc(sizeof(char) * (len + 1));
	if (container == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len; a++)
	{
		container[a] = str[a];
	}
	container[len] = '\0';
	return (container);
}
