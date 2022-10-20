#include "main.h"

/**
*_isupper(int c) - checks  for upper case character
*@c: input characters to check from
*Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
        int upper = 0;
        char letter_up;

        for (letter_up = 'A'; letter_up <= 'Z'; letter_up++)
        {
                if (c == letter_up)
                {
                        upper = 1;
                        break;
                }
        }
        
        return (upper);
}
