#include "main.h"
/**
 * prime - function to return a prime number
 * @a: input
 * @b: input
 *
 * Return: 0
 */

int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	else
		return (prime(a, b + 1));
}
/**
 * is_prime_number - f() to show if an integer is prime or not a prime number
 * @n: input number
 *
 * Return: 0 always
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
