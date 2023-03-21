#include "main.h"

/**
 * times_table - print times table
 */
void times_table(void)
{
	int n1;
	int n2;
	int res;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar('0');
		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');
			res = n1 * n2;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
