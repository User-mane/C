#include <stdio.h>

int main(void)
{
	int integer = 42;
	float singlePrecision = 2.2;
	double doublePrecision = 3.3;
	char singleChar = 'J';

	printf("Your int: %d cast to a float: %f \n", integer, (float) integer);
	printf("Your int: %d cast to a char: %c \n", integer, (char) integer);
	printf("Your float: %f cast to a double: %lf \n", singlePrecision, (double) singlePrecision);
	printf("Your double:
