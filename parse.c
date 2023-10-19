#include "top.h" 
void Parse(char *input, const char *delim)
{

int tok_counter = 0;
char **arr = NULL;

char *input_cp = strdup(input);
  /*handle_inputerror(input, input_cp);*/
tok_counter = counter(char *input, const char *delim);
arr = split(char *input_cp, const char *delim, tok_counter);
execmd(arr);
free_after_exe(input, arr);
}
