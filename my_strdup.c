#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 char* my_strdup(char* param_1)
{
    char *destination = malloc(strlen (param_1));  // Space for length 
    if (destination == NULL) return NULL;          // No memory
    strcpy(destination, param_1);                      // Copy the characters
    return destination;   
}
