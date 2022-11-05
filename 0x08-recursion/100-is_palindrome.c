#include "main.h"
#include "string.h"
/**
 * string_compare - compare a string using pointers from back and forth
 * @s: input
 * @l: length of the string
 *
 * Return: 0 always
 */
int string_compare(char *s, int l)
{
	if (l <=  0)
		return (1);
	else if (*s == *(s + (l - 1)))
		return (string_compare(s + 1, l - 2));
	else
		return (0);
}
/**
 * is_palindrome - funcion to confirm a palindrome
 * @s: integer
 *
 * Return: 0 always
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s);
	return (string_compare(s, l));
}
