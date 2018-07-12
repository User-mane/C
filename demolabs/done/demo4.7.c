/*
Phillip Mane
11 Jul 18
Demo 1
*/

#include <stdio.h>

int main(void)
{
    char string[50] = {0};

    //prompt for string
    printf("Give string: ");
    //input string that stops at first caps or newline
    scanf("%20[^A-Z\n]s", &string);
    //print the entered string
    printf("String is: %s\n", string);

    return 0;

}