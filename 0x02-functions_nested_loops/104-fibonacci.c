#include <stdio.h>

/**
 * main - print first 98 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i, range;
	unsigned int num1, num2, sum;

	num1 = 1;
	num2 = 2;
	range = 98;
	printf("%d, %d, ", num1, num2);
	for (i = 2; i < range; i++)
	{
		sum = num1 + num2;
		printf("%u, ", sum);
		if (i != range - 1)
			printf(", ");
		num1 = num2;
		num2 = sum;
	}
	putchar('\n');
	return (0);
}
