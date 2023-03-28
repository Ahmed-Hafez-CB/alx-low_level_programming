#include "main.h"

/**
 * _strlen - calc string lenght
 * @s : our string
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	for (; *s++;)
		i++;
	return (i);
}
