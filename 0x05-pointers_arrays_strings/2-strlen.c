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

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
