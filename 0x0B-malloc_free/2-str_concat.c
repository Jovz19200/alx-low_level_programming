#include "main.h"
/**
 * str_concat - returns a sring combining s1 and s2
 * @s1: input string 1
 * @s2: input string 2
 * Return: produced string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *cont, *ret;

	cont = s1;
	if (s1)
		while (*cont++)
			i++;
	/* s1 length kept */
	else
		s1 = "";

	cont = s2;
	if (s2)
		while (*cont++)
			j++;
	/* s2 length 2 kept */
	else
		s2 = "";

	ret = malloc(i + j + 1);
	if (!ret)
		return (NULL);

	cont = ret;
	while (*s1)
		*cont++ = *s1++;
	while (*s2)
		*cont++ = *s2++;
	*cont = '\0';
	return (ret);
}
