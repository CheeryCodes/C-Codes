#include <stdio.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <unistd.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
void my_putstr(char* param_1)
{
while (*param_1 != '\0'){
  putchar(*param_1);
  
  param_1++;
}
}
void my_print_words_array(string_array* param_1)
{
 int size = param_1->size;
 char* array = *param_1->array;

for( int i=0; i < size; i++){
   my_putstr(param_1->array[i]);
   my_putstr("\n");
}
}
