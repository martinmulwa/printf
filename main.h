#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 1024 /* buffer size */

/**
 * struct sp - Struct sp
 *
 * @sp: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char sp;
	int (*f)(va_list, char *, int);
} sp_t;

int _printf(const char *format, ...);
int (*get_sp_func(char c))(va_list, char *, int);
int add_char(va_list ap, char *buffer, int i);
int add_str(va_list ap, char *buffer, int i);

#endif
