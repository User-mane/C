#include <stdio.h>

int main(void)
{

	int myIntArray[10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
	float myFloatArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	char myCharArray[256] = {0};
	int i = 0;
	int i2 = 0;

	printf("%d\n", myIntArray[2]);
	printf("%f\n", myFloatArray[2]);
	printf("%c\n", myCharArray[2]);

	if(i<11)
	{
		myIntArray[i] = (0 + 1) * 10;
		i = i + 1;
	}

	if(i2<6)
        {
                myFloatArray[i2] = myFloatArray * 1.1;
                i2 = i2 + 1;
        }

	myCharArray[0] = 'J';
	myCharArray[1] = 'E';
	myCharArray[2] = 'R';
	myCharArray[3] = 'E';
	myCharArray[4] = 'M';
	myCharArray[5] = 'Y';

	printf("%d\n", myIntArray[2]);
        printf("%f\n", myFloatArray[2]);
        printf("%c\n", myCharArray[2]);

	return 0;

}
