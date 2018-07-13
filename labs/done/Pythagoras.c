/*
Phillip Mane
12 Jul 18
Pythag Perf Lab
*/


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* insert initialize variables here */
	double legA = 0;
	double legB = 0;
	double hypotenuse = 0;

    /* request values */
	printf("Input the length of leg A and leg B for your right triangle. \n");
	printf("Separate the two lengths with a space.  (e.g., 1.3 9.7) \n");

	/* scan for variables */
	scanf("%lf %lf", &legA, &legB);

    /* calculate hypotenuse */
	hypotenuse = sqrt((legA*legA) + (legB*legB));

    /* output hypotenuse */
	printf("Your hypotenuse is %.2f. \n", hypotenuse);

	return 0;
}