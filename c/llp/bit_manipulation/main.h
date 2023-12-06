#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>

/* 0 */
unsigned int binary_to_uint(const char *b);
unsigned int two_pow(int n);

/* 1 */
void print_binary(unsigned long int n);
void print(unsigned long int n);

/* 2 */
int get_bit(unsigned long int n, unsigned int index);

/* 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
