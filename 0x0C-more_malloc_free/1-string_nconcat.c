#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - returns a string of n bytes from s2 attached to s1
 * @s1: dest input
 * @s2: source input
 * @n: input bytes
 *
 * Return: combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *comb;

	if (s1 == NULL)
		a = 0;
	else
		a = strlen(s1);
	if (s2 == NULL)
		b = 0;
	else
		b = strlen(s2);
	if (b > n)
		b = n;
	comb = malloc(sizeof(char) * (a + b + 1));
	if (comb == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		comb[c] = s1[c];
	for (c = 0; c < b; c++)
		comb[a + c] = s2[c];
	comb[a + b] = '\0';
	return (comb);
}
