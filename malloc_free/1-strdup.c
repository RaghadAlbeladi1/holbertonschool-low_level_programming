#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Duplicates a string to newly allocated memory
* @str: The string to duplicate
*
* Return: Pointer to the duplicated string, or NULL on failure
*/
char *_strdup(char *str)
{
char *strnew;
unsigned int i;
int n = 0;

if (str == NULL)
return (NULL);

while (str[n] != '\0')
n++;

strnew = malloc((n + 1) * sizeof(char));
if (strnew == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
strnew[i] = str[i];

strnew[i] = '\0';

return (strnew);
}

