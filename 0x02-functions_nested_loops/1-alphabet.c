#include "main.h"
/**
 *main - print the alphabets
 *
 *Return: 0 always
 */
void print_alphabet(void)
{
  char c;
  for(c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
  _putchar('\n');
}
