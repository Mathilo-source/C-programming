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
			scanf("%d", &marks[rows] [cols]);//read the inputs
		}
		printf("Finished Rows %d\n", rows+1);//rows+1 to number the rows
	}
	return 0;
}
