#include "main.h"
/**
 * _strlen_recursion - return the string length
 * @s: the string as an input
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
