#include <stdio.h>

/**
* main - loop through variables a and b, printing digits
*
* Return: print to stdout all possible different combinations of twodigits
**/
int main(void)
{
for (a = "0";a<=9;a++)
{
  for(b="0";b<=9;b++)
  {
    if(b!=a)
    {
      putchar(a)
      putchar(b)
      putchar(',')
      putchar(' ')
      }
  }
}
  putchar('/n')
}
return (0);
}
