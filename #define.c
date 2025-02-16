//defining a constant using preprocessor command
#include <stdio.h>
#define pi 3.142
int main()
{
	int r;
	int area=0;
	printf("Enter the radius:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("%d",area);
	return 0;
}
