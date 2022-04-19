#include "main.h"
#include <stdio.h>

/**
 * add_str - adds a given string to a given buffer
 * @ap: va_list containing the string to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_str(va_list ap, char *buffer, int i)
{
	char *str = va_arg(ap, char *);
	int j;

	if (!str)
		str = "(null)";

	for (j = 0; str[j] != '\0'; j++, i++)
		buffer[i] = str[j];

	return (j);
}
