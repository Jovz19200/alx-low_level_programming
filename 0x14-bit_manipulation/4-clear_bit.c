#include "main.h"
/**
 * clear_bit - clears a bit
 * @n: input bits
 * @index: input index
 * Return: changed bits, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (0);
}

