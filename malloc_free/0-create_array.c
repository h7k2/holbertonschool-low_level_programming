#include <stdio.h>
#include "main.h"

char* create_array(unsigned int size, char c)
{
    if (size == 0)
    return (NULL);
    
    unsigned int i;
    char * ptn;

    ptr = malloc (size * sizeof(char));
    if (ptr == NULL)
        return (NULL);

    for ( i = 0; i < size; i++)
    {
        ptr[i] = c;
    }
    return (ptr);
}
    