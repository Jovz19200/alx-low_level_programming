#include "main.h"
/**
 *_strcat() - function should append the second argument string to the first 
 *@dest: destination string pointer
 *@src: source string pointer
 *Return: changed first argument
 */
char *_strcat(char *dest, char *src)
{
        int pos1 = 0, pos2 = 0;
        while(dest [pos1] != '/0')
       {
               pos1++;
       }
       while(src[pos2] != '/0')
       {
               dest[pos1] = src[pos2];
               pos1++;
               pos2++;
       }
       dest[pos1] = '/0';
       return (dest);
}
