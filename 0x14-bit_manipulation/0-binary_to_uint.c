#include "main.h"

/**
 * binary_to_uint - returns the integers w.r.t input binary
 * @b: input binary
 * Return: the integer on success, 0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	int j, len;
	unsigned int result = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	if (!b)
		return (0);

	j =  1;
	len = len - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1' || b[len] == '0')
		{
			if (b[len] == '1')
			{
			result = result + j;
			j *= 2;
			}
			else
			{
				j *= 2;
			}
		}

		len--;

	}
	return (result);
}
