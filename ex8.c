#include <stdio.h>

int main(int argc, char *argv[])
{
  char full_name[] = {
    'Z', 'e', 'd', 
    ' ', 'A', '.',
    'S', 'h', 'a', 'w', '\0'
  };
  int areas[] = {10,12,13,14,20};
  char name[] = "Zed";

printf("The size of an int: %ld\n", sizeof(int));
printf("The size of areas( int[]): %ld\n", sizeof(areas));
printf("the numbers of ints in areas : %ld\n", sizeof(areas) / sizeof(int));
printf("The first areas is %d, the 2nd: %d\n\n", areas[0], areas[1]);

printf("The size of char: %ld\n", sizeof(char));
printf("The size of name: %ld\n", sizeof(name));
printf("The number of chars: %ld \n\n", sizeof(name) / sizeof(char));

printf("The size of full name (char[]): %ld \n", sizeof(full_name));
printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

printf(" The name = \"%s\"  and full name = \"%s\" \n", name, full_name);
  return 0;
} 
