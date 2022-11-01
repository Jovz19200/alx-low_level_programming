#include "main.h"
/**
 * _strspn - returns the number of bytes in initial segment s from @accept
 * @s: pointer to the string to investigate from
 * @accept: pointer to the message to investigate from of @s
 *
 * Return: the number of bytes held in *s that are also in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, byte = 0;

	for (a = 0; a < strlen(s); a++)
	{
		if (s[a] != 32)
		{
		for (b = 0; b < strlen(accept) ; b++)
		{
			if (s[a] == accept[b])
			{
				byte++;
			}
		}
		}
		else
			return (byte);
	}
	return (byte);
}
