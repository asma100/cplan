#include "top.h" 
void Parse(char *input, const char *delim)
{

int tok_counter = 0;
char **arr = NULL;
int u, j;
char *tok;
char *input_cp = strdup(input);
handle_inputerror(input, input_cp);
tok_counter = counter(input, delim);
arr = malloc(sizeof(char *) * tok_counter);
if (arr == NULL)
{
perror("Error allocating memory for arr:");
free(input);
free(input_cp);
return;
}
  tok = strtok(input_cp, delim);
for (u = 0; tok != NULL; u++)
{
arr[u] = malloc(sizeof(char) * (strlen(tok) + 2));
if (arr[u] == NULL)
{
perror("Error allocating memory for arr[u]:");
for (j = 0; j < u; j++)
{
free(arr[j]);
}
free(arr);
free(input);
free(input_cp);
return;
}
strcpy(arr[u], tok);
tok = strtok(NULL, delim);
}
arr[u] = NULL;
execmd(arr);
free_after_exe(input, arr, u);
}
