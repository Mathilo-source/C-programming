#include <stdio.h>
int main()
{
	int marks [5] [2];//2 dimentional array
	int rows, cols;
	for( rows = 0; rows < 5; rows++)

	{
		for(cols = 0; cols < 2; cols++)
		{
			printf("%d ", marks[rows , cols]);
		}
		printf("\n");
	}



	return 0;
}
