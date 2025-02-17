#include <stdio.h>
int main()
{
	int rows,i=0;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	while(i<rows)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}