#include <stdio.h>
#include "main.h"
/**
*factorial- returns the length of a string.
*@n: factorial of
*Return: factorial number;
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
