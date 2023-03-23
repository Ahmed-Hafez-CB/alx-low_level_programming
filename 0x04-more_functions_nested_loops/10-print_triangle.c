#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (spaces = size - i; spaces >= 1; spaces++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
