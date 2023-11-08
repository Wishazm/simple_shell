#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;


char *get_linefunc(void);
char **splitter(char *line);
int _execute(char **cmd, char **argv, int indx);
void freearrays(char **array);
int _execute2(char **cmd, char **argv, int indx);
char **splitter2(char *line);
char *_getenv(char *var);
char *_getpath(char *cmd);
void printerro(char *name, char *cmd, int indx);
int _builtin(char *cmd);
void handle_builtin(char **cmd, int status);
void exite(char **cmd, int status);
void printenv(char **cmd, int status);


char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_itoa(int n);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
char *_strdup(char *str);
void reversing(char *str, int length);

#endif
