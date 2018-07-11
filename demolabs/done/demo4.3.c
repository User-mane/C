#include <stdio.h>

int main()
{
    int userNum = 0;

    printf("Enter a character: ");
    userNum = getchar();

    printf("Your character is: ");
    putchar(userNum);
    printf("\n");

    return 0;

}