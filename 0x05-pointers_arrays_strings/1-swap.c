#include "main.h"

/**
 * swap_int - swap values of two nums namely a and b
 *
 * @b: first pointer
 * @a: second pointer
 * Return 0
 */
void swap_int(int *a, int *b)
{
        int container;

	container= *a;
	*a = *b;
	*b = container;
}
