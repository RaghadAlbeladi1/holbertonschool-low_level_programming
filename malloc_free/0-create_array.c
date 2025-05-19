#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)  // Check if size is 0
return (NULL);

// Allocate memory for the array
char *array = malloc(size * sizeof(char));
    
if (array == NULL)  // Check if memory allocation failed
return (NULL);

// Initialize the array with the given character
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}

return (array);  // Return the pointer to the array
}

