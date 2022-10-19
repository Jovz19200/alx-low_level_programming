#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @k: The number to begin counting at.
 */
void print_to_98(int k)
{
	if (k >= 98)  /*descending*/
	{
		while (k > 98)
			printf("%d, ", k--);
		printf("%d\n", k);
	}

	else            /*ascending*/
	{
		while (k < 98)
			printf("%d, ", k++);
		printf("%d\n", k);
	}
}
