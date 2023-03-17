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
	int z;

	for (x = 0; x < 10 ; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x*10 + y;
			if (x == y || z == (y*10 + x))
				continue;
			putchar(z + '0');
			if (z == 89)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
