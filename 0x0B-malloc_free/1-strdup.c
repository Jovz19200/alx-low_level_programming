#include "main.h"
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

	container = malloc(sizeof(char) * len);
	if (container == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
	{
		container[a] = str[a];
	}
	return (container);
}
