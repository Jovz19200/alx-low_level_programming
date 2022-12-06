#include "main.h"
/**
 * get_endianness - returns the endian of the OS
 * Return: big-endian if 0 and little-endian if 1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
