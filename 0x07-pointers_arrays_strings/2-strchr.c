#include "main.h"
/**
 * _strchr - function to return a pointer at the first occurence of character c
 * @s: pointer to the input string to check from
 * @c: the character we are looking for from @s
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	else
		return (NULL);
}
