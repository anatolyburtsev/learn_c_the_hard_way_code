#include <stdio.h>

int main(int argc, char *argv[])
{
  char st1[] = "blah";
  //st1[1] = 'r';

  char* st2 = "blah";
  //st2[1] = 'r';
  printf("sizeof [] string: %lu\n", sizeof(st1));
  printf("sizeof * string: %lu\n", sizeof(st2)); 
  return 0;
}
