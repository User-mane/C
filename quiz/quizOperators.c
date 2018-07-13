/*
Phillip Mane
12 Jul 18
Operator quiz
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 7;
    int y = 4;
    float z = 0;


    //////// WRITE EACH RESULT ////////
    printf("x * y equals %d\n",x * y);
    printf("z = x / y meaning z equals %f\n", z);
    printf("x % y equals %d\n", x % y);   
    printf("y + x equals %d\n", y + x);
    printf("y - x equals %d\n", y - x);
    printf("-y equals %d\n", -y);
    printf("++x equals %d\n", ++x);
    printf("y++ equals %d\n", y++);
    printf("x-- equals %d\n", x--);
    printf("--y equals %d\n", --y);
    printf("1 + 2 * (3 + y) + 5 equals %d\n", 1 + 2 * (3 + y) + 5);

    return 0;

}