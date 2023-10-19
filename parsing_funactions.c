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
int tok_counter;
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



void  free_after_exe(char *input, char **arr,int u)
{
int i;
for (i = 0; i < u; i++)
{
free(arr[i]);
}
free(arr);
free(input_cp);
 }


