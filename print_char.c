#include "main.h"

/**
 * print_char - adds a given character to a given buffer
 * @c: The character to print
 *
 * Return: 1(number of characters added)
 */
int print_char(va_list ap, char *buffer, int i)
{
	char c = (char) va_arg(ap, int);

	buffer[i] = c;

	return (1);
}
