#include <stdio.h>
#include "main.h"
/**
*_pow_recursion- returns the length of a string.
*@x: number
*@y: power of
*Return: power of number x,y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
return (x);
}

