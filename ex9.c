#include <stdio.h>

int main(int argc, char *argv[])
{
  char *name = "a  ";
  int numbers[8] = {0}; 
  
  printf("numbers: %d, %d, %d, %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
  
  printf("name: %s\n", name);
  
  //setup the name
  name[0] = 'Z';
  printf("Z is done");
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  // setup the number
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;
/*  numbers[4] = name[0];
  numbers[5] = name[1];
  numbers[6] = name[2];
  numbers[7] = name[3];*/

  printf("numbers: %d, %d, %d, %d \n", numbers[0], numbers[1], numbers[2], numbers[3]); //, numbers[4], numbers[5]);
  printf("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);

  printf("name: %s\n", name);

  char *another = "Zed";
  printf("another each: %c, %c, %c, %c\n", another[0], another[1], another[2], another[3]);
  
  printf("char as number: %d %d %d %d\n", name[0], name[1], name[2], name[3]);

  return 0;
}
