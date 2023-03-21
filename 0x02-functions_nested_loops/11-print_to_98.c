#include <stdio.h>

/**
 * print_to_98 - prints from any number til 98
 * @n: our number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("98\n");
}
