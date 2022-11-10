#include "main.h"
#include<stdlib.h>
/**
 * _calloc - returns the pointer to first byte of memory allocated to the array
 * @nmemb: input array
 * @size: input
 *
 * Return: the pointr to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	A = malloc(size * nmemb);
	for (i = 0; i < (size * nmemb); i++)
		A[i] = 0;
	if (A == NULL)
		return (NULL);
	return (A);

}
