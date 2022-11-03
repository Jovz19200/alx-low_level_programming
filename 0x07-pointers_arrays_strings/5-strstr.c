#include "main.h"

/**
 * _strstr - function to find the first occurence of the string @needle in s
 * @haystack: pointer to the string to search from
 * @needle: pointer to the message to search for
 *
 * Return: the message found in string
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
