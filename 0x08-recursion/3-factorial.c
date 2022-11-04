#include "main.h"
/**
 * factorial - function to return a factorial of an input n
 * @n: input to find its factorial
 *
 * Return: 0 always
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}

	return (n * factorial(n - 1));
}
