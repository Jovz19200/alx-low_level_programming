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
	unsigned int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] !=  '\0' && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!(needle[j]))
		return (haystack + i);
	}
	return (NULL);
}
