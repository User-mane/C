#include <stdio.h>

int main(void)
{
	int num;
	float digi;
	double bigDigi;
	char letter;

	num = 13;
	digi = 2.4;
	bigDigi = 2.444444444;
	letter = 'Q';

	printf("The int is %d and it's size is %d\n",num, sizeof(num));
	printf("the float is %f and it's size is %d\n",digi, sizeof(digi));
	printf("the double is %lf and it's size is %d\n",bigDigi, sizeof(bigDigi));
	printf("The char is %c and it's size is %d\n",letter, sizeof(letter));

	return 0;

}
