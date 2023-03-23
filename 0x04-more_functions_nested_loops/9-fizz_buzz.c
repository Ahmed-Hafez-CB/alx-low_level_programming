#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz buzz for multiple of 15 , fizz for 3 and buzz for 5
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (1 < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
