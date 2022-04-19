#include "main.h"
#include <stdio.h>

/**
 * int_to_str - finds the representation of a given number in a given base
 * @num: decimal number
 * @base: base to represent the number with (2, 8, 10 or 16)
 *
 * Return: string representing num in the given base. Otherwise NULL
 */
char *int_to_str(unsigned int num, int base)
{
	char *symbols = "0123456789abcdef";
	char *result;
	char digits[1024] = {0};
	int i, length = 0;

	/* add the digits of num to digits */
	if (num == 0)
	{
		digits[0] = '0';
		length++;
	}

	while (num > 0)
	{
		digits[length] = symbols[num % base];

		length++;
		num /= base;
	}

	/* copy digits to result array in reverse order */
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	result[length] = '\0';

	for (i = 0; length > 0; i++, length--)
		result[i] = digits[length - 1];

	return (result);
}

/**
 * add_int - adds a given integer to a given buffer as decimal number
 * @ap: va_list containing the integer to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_int(va_list ap, char *buffer, int i)
{
	int num = va_arg(ap, int);
	int k, j = 0;
	char *num_str;

	/* add '-' in front of negative numbers */
	if (num < 0)
	{
		num = -num;
		buffer[i++] = '-';
		j++;
	}

	num_str = int_to_str(num, 10);
	if (!num_str)
		return (0);

	for (k = 0; num_str[k] != '\0'; k++, i++)
		buffer[i] = num_str[k];

	free(num_str);
	return (j + k);
}

/**
 * add_bin - adds a given integer to a given buffer as binary number
 * @ap: va_list containing the integer to add
 * @buffer: character buffer
 * @i: index from which to start adding to buffer
 *
 * Return: number of characters added
 */
int add_bin(va_list ap, char *buffer, int i)
{
	unsigned int num = va_arg(ap, unsigned int);
	int j = 0;
	char *num_str;

	num_str = int_to_str(num, 2);
	if (!num_str)
		return (0);

	for (j = 0; num_str[j] != '\0'; j++, i++)
		buffer[i] = num_str[j];

	free(num_str);
	return (j);
}
