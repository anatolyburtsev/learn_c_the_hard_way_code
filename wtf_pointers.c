#include <stdio.h>

int main(int argc, char *argv[])
{
  int number_array[] = {1,2,3};
  char *string_array[] = {"one", "two", "three"};  
  int count = sizeof(number_array) / sizeof(int);
  printf("Arrays size. number_array: %lu, string_array: %lu\n", sizeof(number_array), sizeof(string_array));

  int *number_pointer = number_array;
  char **string_pointer = string_array;

  printf("Pointers size. number_pointer: %lu, string_pointer: %lu\n", sizeof(*number_pointer), sizeof(**string_array) );

  int i = 0;
  for (i = 0; i< count; i++) {
    printf("number: %d, st_number: %s\n", *number_pointer, *string_pointer);
    printf("pointer values: number pointer: %d, sttring pointer: %d, *string pointer: %d, *string pointer as string:%s\n", number_pointer, string_pointer, *string_pointer, *string_pointer);
    number_pointer++;
    string_pointer++;
  }

  return 0;
}
