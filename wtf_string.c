#include <stdio.h>


int main(int argc, char *argv[])
{
  char st1[] = "blah";
  printf ("st1[1] = %c\n", st1[1]);
  st1[1] = 'u';

  char *st2 = "blah";
  printf ("st2[1] = %c\n", st2[1]);
  st2[1] = 'r';
  
  return 0;
}
