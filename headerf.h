#ifndef HEADERF_H
#define HEADERF_H
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_ARG 100
#define MAX_INPUT 200
void myprintfunx_edna(const char *whattoprint);
int _strlen(char *s);
void mydispfunx_edna(void);
void myexecfunx_edna(const char *whattoprint, char *envp[]);
int _isdigit(int c);
void myreadfunx_edna(char **whattoprint, size_t *siz);
int _cusstrcmp(char *s1, char *s2);
char *getpath(char **envp);
void exec_processid(const char *whattoprint, char *envp[]);
char *mystrtokfunx_edna(char *str, const char *del);
char *_strncat(char *dest, char *src, int n);
#endif
