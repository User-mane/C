#include <stdio.h>

int main(void)
{

	int studNum[6] = {24,26,28,22,29,24};
	char quote[256] = {"What\nwould\nyou\nrecommend\n"};
	quote[256] = '\0';


	int counter = 0;
	while(counter < 6)
	{
		printf("%d \n", studNum[counter]);
		counter++;
	}


	printf("%s \n", quote);

	return 0;

}
