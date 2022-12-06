#include "main.h"
/**
 * flip_bits -  returns number of bits you need to flip from one num to other
 * @n: input 1
 * @m: input 2
 * Return: number of bits needed
 * it will count XOR i.e positions in A or B with 1's except those in common
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, count_XOR;

	count_XOR = 0;
	while (xor > 0)
	{
		count_XOR += (xor & 1);
		xor >>= 1;
	}
	return (count_XOR);
}
