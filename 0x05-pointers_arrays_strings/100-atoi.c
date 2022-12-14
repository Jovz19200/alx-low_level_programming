#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: points to a string to convert
 * Return: int value
 */
int _atoi(char *s)
{
	int label = 1;
	unsigned int num = 0;

	while (!('0' <= *s && '9' >= *s) && *s != '\0')
	{
		if (*s == '-')
			label *= -1;
		if (*s == '+')
			label *= +1;
		s++;
	}
	while ('0' <= *s && '9' >= *s && *s != '\0')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	return (num * label);
}
