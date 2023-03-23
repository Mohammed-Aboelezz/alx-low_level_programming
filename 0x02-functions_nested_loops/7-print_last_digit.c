#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int lst;

	if (n < 0)
	{
		lst = -1 * (n % 10);
		_putchar(lst + '0');
		return (lst);
	}
	else
	{
		lst = n % 10;
		_putchar(lst + '0');
		return (lst;
	}
}
