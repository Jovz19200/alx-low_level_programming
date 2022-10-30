#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: points to a string to convert
 * Return: int value
 */
int _atoi(char *s)
{
	int label = 1, count = 0;
	unsigned int num = 0;

	while ('0' <= *s && '9' >= *s && *s != '\0')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	while (!('0' <= *s && '9' >= *s) && *s != '\0')
	{
		if (*s == '-')
		{
			count++;
		}
		if (count % 2 != 0)
			label = -1;
		else
			label = +1;
		if (*s == '+')
			label *= +1;
		s++;
	}
	return (label * num);
}
