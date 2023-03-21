#include "main.h"

/**
 * print_times_table - prints times table to a number
 * @n: our number
 */
void print_times_table(int n)
{
	int num1;
	int num2;
	int res;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');
				res = num1 * num2;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
