#include <stdio.h>

int main(void)
{
    char myFavWord [9] = {0};
    
    myFavWord [0] = 'f';
    myFavWord [1] = 'a';
    myFavWord [2] = 'v';
    myFavWord [3] = 'o';
    myFavWord [4] = 'r';
    myFavWord [5] = 'i';
    myFavWord [6] = 't';
    myFavWord [7] = 'e';
    myFavWord [8] = 0;

    printf("My favorite word is \"%s\"\n", myFavWord);

}