#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
char* my_join(string_array* param_1, char* param_2)
{
    if(param_1->size == 0){
        return NULL;
    }
    // Calculate the total length of the resulting string
    int total_length = 0;
    for (int i = 0; i < param_1->size; i++) {
        total_length += strlen(param_1->array[i]);
    }
    // Add space for separators
    total_length += strlen(param_2) * (param_1->size - 1);

    // Allocate memory for the resulting string
    char* result = (char*)malloc(sizeof(char) * (total_length + 1));
    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    // Copy strings from the array to the result string
    strcpy(result, param_1->array[0]);
    for (int i = 1; i < param_1->size; i++) {
        strcat(result, param_2); // Append separator
        strcat(result, param_1->array[i]); // Append string
    }

    return result;
}


