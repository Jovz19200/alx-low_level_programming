#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - -function to return the sum of two square matrix's diagonal
 *@a: the array to use
 *@size: size of an array
 *
 * Return: two sums of both diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		/**
		 * for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1)
			{
				if (i == j && i + j == size - 1)
					diag2 += (a + (i + j));
				if (i == j)
					diag1 += (a + (i + j));
				else
					diag2 += (a + (i + j));
			}
			else
				continue;

		}
		*/
		diag1 += a[i];
		diag2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d", diag1, diag2);
}
