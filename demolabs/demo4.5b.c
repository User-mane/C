/*
Phillip Mane
11 Jul 18
Demo 1
*/

#include <stdio.h>

int main(void)
{
    char buff[4];
    printf("Enter string: ");
    fgets(buff, sizeof(buff), stdin);

    printf("Your string was: ");
    fputs(buff, stdout);

    return 0;

}