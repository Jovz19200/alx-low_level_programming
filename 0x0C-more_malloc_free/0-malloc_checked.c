#include "main.h"
#include<stdlib.h>
/**
 *  malloc_checked - return a pointer to the first byte of  allocated memory
 * @b:  input
 *
 * Return: pointer to an allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
