#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* 0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1 */
int create_file(const char *filename, char *text_content);

/* 2 */
int append_text_to_file(const char *filename, char *text_content);

/* 3 */
int main(int argc, char **argv);
void err_97(void);
void err_98(char *str);
void err_99(char *str);
void err_100(int val);

#endif
