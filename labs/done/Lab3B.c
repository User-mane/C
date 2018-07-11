/*
Phillip Mane
11 July 18
Lab 3B Strings
*/
#include <stdio.h>

int main(void)
{
    char bigStr [256] = {0};

    bigStr [0] = 'W';
    bigStr [1] = 'o';
    bigStr [2] = 'r';
    bigStr [3] = 'd';
    bigStr [4] = '\0';

    printf(bigStr);

    return 0;

}