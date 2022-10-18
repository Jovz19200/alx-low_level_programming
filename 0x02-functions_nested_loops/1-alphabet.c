#include "main.h"
/**
*main - check the code
 *print_alphabet -> print the alphabets in lower case
 *Return: 0 always
 */
void print_alphabet(void)
{
  int c;
  for(c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
  _putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}  
