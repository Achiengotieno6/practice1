#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

/* helper functions */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
/* main functions */
void print_prompt(void);
char *read_command(void);
char *_strncpy(char *dest, char *src, int n);
#endif
