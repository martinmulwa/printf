#include "main.h"

/**
 * main - tests _printf for task 0
 *
 * Return: 0 always
 */
int main(void)
{
    /* print null string */
    /*_printf(NULL);*/

    /* print empty string */
	_printf("");

    /* print string with no format specifiers */
	_printf("Hello World\n");

	/* print string with only a single %c */
	_printf("c: %c\n", 'z');

	/* print string with multiple %c */
	_printf("%c%c%c\n", 'H', 'i', '!');

	return (0);
}
