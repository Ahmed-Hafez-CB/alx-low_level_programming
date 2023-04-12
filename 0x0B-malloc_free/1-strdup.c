#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: string
 * Return: a pointer to new string or NULL
 */

char *_strdup(char *str)
{
	char *str2, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	str2 = malloc(sizeof(char) * (len + 1));
	start = str2;

	if (str2 != NULL)
	{
		for (; i < len; i++)
		{
			str2[i] = *str;
			str++;
		}
		str2[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
