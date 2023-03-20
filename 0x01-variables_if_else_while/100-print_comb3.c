#include <stdio.h>

/**
* main - loop through variables a and b, printing digits
*
* Return: print to stdout all possible different combinations of twodigits
**/
int main(void)
{
int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
}
return (0);
}
