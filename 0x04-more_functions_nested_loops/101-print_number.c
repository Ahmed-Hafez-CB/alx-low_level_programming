#include "main.h"

/**
 * print_number - prints an integer
 * @n: our integer
 */
void print_number(int n)
{
	unsigned long i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
		print_number(i / 100);
	_putchar(i % 10 + '0');
}
