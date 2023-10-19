#ifndef TOP
#define TOP
#include <stddef.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <fcntl.h>

extern char **environ;

void print_top(char *top);
void inputtop (char *input, size_t s, int status);
void env_builtin();
int empty(char *input);
void execmd(char **argv);
void handle_inputerror(char *input, char *input_cp);
int counter(char *input, const char *delim);
char **split(char *input_cp, const char *delim,int tok_counter);
void  free_after_exe(char *input, char **arr);
void Parse(char *input, const char *delim);
#endif
