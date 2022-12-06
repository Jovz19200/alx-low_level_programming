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
	unsigned long int xor = n ^ m, xor_res = 1;
	unsigned int i, count_XOR;

	count_XOR = 0;
	for (i = 0; i < (sizeof(unsigned int) * 8); i++)
	{
		if (xor_res == (xor & xor_res))
				count_XOR++;
		xor_res <<= 1;
	}
	return (count_XOR);
}
