#include "main.h"
/**
 * _memcpy - function to copy n bytes of memory area from @src to @dest
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes to copy from source to destination
 *
 * Return: destination pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
