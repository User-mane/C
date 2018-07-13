/*
Phillip Mane
11 Jul 18
Algorythm Quiz
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
    int y = 4;
    //1 + 2 * (3 + y) + 5;        // Result 20
    printf("\n1 + 2 * 3 + (2 * y) + 5 = %d\n", 1 + 2 * 3 + (2 * y) + 5);

    //////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
    int x = 2; y = 6;
    //x != y != 3 >= x;          // Result 0
    printf("\nx <= 3 != y != x I guess?\n");

    //////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
    x = 9; y = 3;
    //(y %= y) || (x /= x--);    // Result 0
    printf("\n(y /%= y) && (x /= x--) I GUESS?!?!\n\n");

    return 0;
}