#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  for (i = 0; i < argc; i++) {
    printf("Arg %d: %s\n", i, argv[i]);
  }

  char *states[] = { 
    "California", "Texas",
    NULL, "Oregon"
  };
  int num_states = 4;
  argv[1] = states[1];
  states[2] = argv[2];

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s \n", i, states[i]);
  }

  return 0;
}
