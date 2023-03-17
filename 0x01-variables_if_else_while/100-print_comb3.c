#include <stdio.h>

/**
 * main - print 2 digits combination
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10 ; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == y || (x * 10 + y) == (y * 10 + x))
				continue;
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
