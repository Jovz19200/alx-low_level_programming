#include "main.h"
/**
 * _memset - function to fill char b inside n byte memorya area
 * @b: character to be displayed inside n bytes memory space
 * @s: pointer to the array of spaces available
 * @n: number of times char b has to be displayed
 * Return: the displayed screen with b char printed n times from s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (0);
}
