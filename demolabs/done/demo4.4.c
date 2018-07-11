#include <stdio.h>

int main(void)
{
    int input = 0;

    printf("Enter a charmander: ");
    input = getc(stdin);

    printf("Your charmander was: ");
    putc(input, stdout);
    printf("\n");

    return 0;

}