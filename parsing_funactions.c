#include "top.h"
void handle_inputerror(char *input, char *input_cp)
{
if (input_cp == NULL)
{
perror("Error allocating memory:");
free(input);
return;
}
if (input[0] == '\0')
{
free(input_cp);
return;

}
}

int counter(char *input, const char *delim)
{
char *tok; 
tok = strtok(input, delim);
while (tok != NULL)
{
tok_counter++;
tok = strtok(NULL, delim);
}
tok_counter++;

return (tok_counter);
}


 char **split(char *input_cp, const char *delim,int tok_counter)
{ 
int u, j;
char *tok;
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
return(NULL);
}
strcpy(arr[u], tok);
tok = strtok(NULL, delim);
}
arr[u] = NULL;
return (arr);
}

voide  free_after_exe(char *input, char **arr)
{
int i;
for (i = 0; i < u; i++)
{
free(arr[i]);
}
free(arr);
free(input_cp);
 }


