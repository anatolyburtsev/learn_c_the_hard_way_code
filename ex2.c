#include <stdio.h>

int main(int agrc, char *agrv[])
{
    printf("%-*d\n", 5, 10);
    printf("%.*s\n", 3, "a");
    printf("%s", "");
    return 0;
}
