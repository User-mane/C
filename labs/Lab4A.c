/*
Phillip Mane
11 Jul 18
Lab 4A getchar putchar
*/

#include <stdio.h>

int main(void)
{
    int usrlet = 0;

    printf("Gimme a character: ");
    usrlet = getchar();

    printf("The  next character is: ");
    putchar(usrlet + 1);
    printf("\n");

    return 0;

}