#include "main.h"
/**
 * set_bit - returns the changed bits
 * @n: input bits
 * @index: index of change
 * Return: a changed bits
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
		return (1);
}
