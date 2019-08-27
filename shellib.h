#ifndef _SHELLIB_H_
#define _SHELLIB_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>

int exefork(char **bftoken);
int _putchar(char c);
char **linetoken(char *linea);
char **findpath(char **environ);
char **usepath(char *fpat);
void _stat(char **bftoken, char **pat);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
void find_env(char **environ);
void _puts(char *str);
#endif