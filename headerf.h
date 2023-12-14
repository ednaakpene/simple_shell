#ifndef HEADERF_H
#define HEADERF_H

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_ARG 100
#define MAX_INPUT 200
void myprintfunx_edna(const char *whattoprint);
void mydispfunx_edna(void);
void myexecfunx_edna(const char *whattoexe);
void myreadfunx_edna(const char **whattoread, size_t *siz);
int main(void);
#endif
