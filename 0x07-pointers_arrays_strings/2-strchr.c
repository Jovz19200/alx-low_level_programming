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
	int a;

	for (a = 0; 'a' <= s[a] && 'z' <= s[a]; a++)
	{
		if (s[a] != c)
			a++;
		else
			return (*(s + a));
	}
	if  (c == '\0')
		return (s);
	else
		return (NULL);
}
