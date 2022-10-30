#include "main.h"
#include <string.h>
/**
 * puts_half - Print half a str
 * @str: a pointer
 */

void puts_half(char *str)
{
  int n,a;

        int len = strlen(str);
	if ( len % 2 == 0)
	  n = len / 2;
        else
	  n = (len + 1)/2;
	for (a = n; str[a] != '\0';  a++)
	    _putchar(str[a]);
        _putchar('\n');
}
