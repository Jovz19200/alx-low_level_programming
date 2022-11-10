#include "main.h"
#include <stdlib.h>
/**
 * array_range - returns arrays from min to max
 * @min: input start of array
 * @max: input end of array
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int a, size;
	int *A;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	A = malloc(sizeof(int) * size);
	if (A == NULL)
		return (NULL);
	for (a = 0; a < size; a++, min++)
		A[a] = min;
	return (A);
}
