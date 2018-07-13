/*
Phillip Mane
13 Jul 18
Assignment Operator quiz
*/

#include <stdio.h>
#include <math.h>

int main(void)
{

    int x = 9;
    int y = 3;
    //////// WRITE EACH VALUE OF X ////////

    printf("x *- y = 27");
    printf("x /= y = 3");
    printf("x \%= y = 0");
    printf("x += y = 12");
    printf("x -= y = 6");
    printf("x *= ++y = 32");
    printf("x /= y-- = 3");
    printf("x \%= --x = 1");
    printf("x += --y = 11");
    printf("x -= y++ = 6");
    printf("(y \%= y) || (x /= x--) = 0");  

    return 0;

}