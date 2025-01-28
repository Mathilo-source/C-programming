#include <stdio.h>
int main()
{
	int marks[5]={1,2,5,67,32};//initialization
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",marks [i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("%d ",marks[i]);
	}
return 0;
}