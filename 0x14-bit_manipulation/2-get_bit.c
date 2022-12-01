#include "main.h"
/**
 * get_bit - return the bit on the specified index
 * @n: input number
 * @index: input position
 * Return: the bit, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
