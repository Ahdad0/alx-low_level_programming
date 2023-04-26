#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


void _putchar(int n);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
