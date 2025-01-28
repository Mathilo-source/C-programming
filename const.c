#include <stdio.h>
int main()
{
	int r;
	int area=0;
	const float pi=3.142;
	printf("Enter the radius:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("%d",area);
	return 0;
}