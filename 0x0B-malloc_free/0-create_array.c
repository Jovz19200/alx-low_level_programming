#include "main.h"
#include <stdio.h>
/**
 * create_array - returns a pointer to the created array
 * @size: input size of created array
 * @c: input characteras the initial to each element of an array
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *new_array;

	if (size == 0)
		return (NULL);

	new_array = malloc(sizeof(char) * size);
	if (new_array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		new_array[a] = c;
	}
	return (new_array);
}
