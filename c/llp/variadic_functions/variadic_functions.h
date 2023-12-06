#ifndef _variadic_functions_h
#define _variadic_functions_h

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct tpf- structure
 * @c: char
 * @f: function pointer
 */
typedef struct tpf
{
        char *c;
        void (*f)(va_list);
} tpf_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

#endif
