# ALX Printf Project
Project:

_printf () – is an ALX project. The task is to write a custom version of the printf () from the standard library.

General Requirements:

Here are the general requirements:


Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 14.04 LTS

Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called main.h

Don’t forget to push your header file

All your header files should be included guarded

Note that we will not provide the _putchar function for this project


Authorized functions and macros

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)
va_start (man 3 va_start)

va_end (man 3 va_end)
va_copy (man 3 va_copy)

va_arg (man 3 va_arg)


Compilation

Your code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

Format Specifiers

Functionname Description  Format Specifier
print_char   Prints a character %c

print_percent  Prints a percent  %%%
print_int	Prints and integer %d&%i

print_string	Prints a string     %s
print_binary	Prints a binary     %b

print_octal    Prints number in base8  %o
print_hex      Prints hexadecimal in lowercase %x

print_HEX    Prints hexadecimal in uppercase %X

print_unsigned	Prints unsigned integer %u

print_S	Prints string, prints hex value of non visible characters %S
print_address	Prints a pointer%p

print_rev	Prints string in reverse, custom specifier %r

print_rot13	Prints string in rot13, custom specifier %R

Tasks

- 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life mandatory

- 1. Education is when you read the fine print. Experience is what you get if you don't mandatory

- 2. Just because it's in print doesn't mean it's the gospel mandatory













