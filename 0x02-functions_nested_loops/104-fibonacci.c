#include <stdio.h>

/**
 * main - print first 98 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long num1, num2, sum;

	for (i = 0; i < 98; i++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
	}
	putchar('\n');
	return (0);
}
