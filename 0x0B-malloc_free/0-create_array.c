#include "main.h"

/**
* create_array - create an array of the chars, and
* initializes it with a respective char.
* @size : size of the array
* @c : character to insert
* Return : NULL if size is zero or if it fails,
* pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);
array = (mallocsizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);
}
