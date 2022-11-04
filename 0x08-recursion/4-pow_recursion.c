#include "main.h"
/**
 * _pow_recursion - function to return x^y
 * @x: base input
 * @y: exponent input
 *
 * Return: 0 always
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));

}
