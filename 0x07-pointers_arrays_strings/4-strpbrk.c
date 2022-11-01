#include "main.h"
/**
 * _strpbrk - function to locate the 1st byte of @accept occurence in @s
 * @s: the pointer to the string to investigate
 * @accept: the pointer to message in investigation
 *
 * Return: the pointer to the byte in @s or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
