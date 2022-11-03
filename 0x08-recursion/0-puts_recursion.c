#include "main.h"
/**
 * _puts_recursion - function to print a string followed by a new line
 * @s: string given
 *
 * Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
