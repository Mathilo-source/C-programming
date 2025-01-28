#include <stdio.h>
int calcproduct(int x,int y);
int main()
{
	int x,y;
	printf("Enter the number values:\n");
	scanf("%d%d",&x,&y);
	printf("product=%d",calcproduct(x,y));
	return 0;
}
int calcproduct(int x,int y)
{
int product;
product=x*y;
return product;	
}