#include <stdio.h>

int main(void)
{

	int num = 57; 
	float fat = 2.6;
	double bigFat = 3.4234234234234;
	char letter = 'o';

	printf("The int %d as a float: %f\n",num, (float)num);
	printf("The int %d as a char: %c\n",num, (char)num);
	printf("The float %f as a double: %.15f\n",fat, (double)fat);
	printf("The double %.15f as a float: %f\n",bigFat, (float)bigFat);
	printf("The char %c as an int: %d\n",letter, (int)letter);
	printf("The number 33 as a char: %c\n",(char)33);

	return 0;

}
