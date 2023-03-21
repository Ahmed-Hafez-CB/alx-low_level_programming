#include <stdio.h>

/**
 * main - print even valued fibonacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long num1, num2, sum;
	float total_sum;

	num1 = 0;
	num2 = 1;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 2)
			total_sum += sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
