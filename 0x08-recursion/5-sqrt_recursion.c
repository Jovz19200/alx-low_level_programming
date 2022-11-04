#include "main.h"
/**
 * _sqrt - sqrt pre-function definition
 * @a: input
 * @b: input
 *
 * Return: 0;
 */
int _sqrt(int b, int a)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (_sqrt(b, a + 1));
}
/**
 * _sqrt_recursion - function to return the sqrt of n
 * @n: input number
 *
 * Return: 0 always.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
