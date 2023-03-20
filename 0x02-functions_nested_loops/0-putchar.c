#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char hold[] = "_putchar";
	int i = 0;

	while (hold[i] != '\0')
	{
		_putchar(hold[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
