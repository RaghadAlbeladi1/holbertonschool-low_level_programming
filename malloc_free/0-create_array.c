#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*
*
*
*
* Return: Nothing
*/
int main(void)
{

char *arr;
unsigned int size = 5;
char c = 'A';

arr = malloc(size *sizeof(char));

if (arr == NULL)
{
return (1);
}



free(arr);
return (0);
}
