#include "main.h"

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *cont, *returner;

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

	returner =  malloc(i + j + 1);
	if (!returner)
		return (NULL);

	cont = returner;
	while (*s1)
		*cont++ = *s1++;
	while (*s2)
		*cont++ = *s2++;
	*cont = '\0';
	return (returner);
}
