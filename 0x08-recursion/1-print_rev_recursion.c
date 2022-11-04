#include "main.h"
/**
 * _print_rev_recursion - function to print the string in reverse
 *  @s: a string to reverse
 *
 *  Return: the reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
