#include <stdio.h>
int main()
{
	int marks [2] [3];//2 dimentional array
	int rows, cols;
	printf("Enter the Array values:\n");
	for( rows = 0; rows < 2; rows++)

	{
		for(cols = 0; cols < 3; cols++)
		{
			scanf("%d", &marks[rows] [cols]);
		}
		printf("Finished Rows %d\n", rows + 1);
	}
		for( rows = 0; rows < 2; rows++)

	{
		for(cols = 0; cols < 3; cols++)
		{
			printf("%d ",marks[rows] [cols]);
		}
		printf("\n");
	}
	return 0;
}
