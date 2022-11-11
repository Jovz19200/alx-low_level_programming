#include "main.h"
#include <stdlib.h>
/**
 * _realloc - returns a pointer of the first byte after reallocation
 * @ptr: input prev memory allocation
 * @old_size: input
 * @new_size: input
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cont, *ptr1 = ptr;
	int a, b;

	if (ptr == NULL)
	{
		cont = malloc(new_size);
		return (cont);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	cont = malloc(new_size);
	if (cont == NULL)
		return (NULL);
	else if (new_size > old_size)
		b = old_size;
	for (a = 0; a < b; a++)
		cont[a] = ptr1[a];
	free(ptr);
	return (cont);
}
