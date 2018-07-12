/*
Phillip Mane
11 Jul 18
Demo 2
*/

#include <stdio.h>

int main(void)
{
    int day;
    int month;
    int year;

 /*   //request day
    printf("Day(dd): ");
    scanf("%2d", &day);

    //request month
    printf("Month(mm): ");
    scanf("%2d", &month);

    //request year
    printf("Year(yyy): ");
    scanf("%4d", &year);
*/
    printf("Give me the date(mm-dd-yyyy): ");
    scanf("%2d-%2d-%4d", &month, &day, &year);

    //print date
    printf("The date is %d\\%d\\%d\n", month, day, year);

    return 0;

}