#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive nums
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	sum = 0;

	for (x = 1; x < argc ; x++)
	{
		for (y = 0; argv[x][y] != '\0' ; y++)
		{
			if (argv[x][y] < 47 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
