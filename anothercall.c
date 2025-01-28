#include <stdio.h>
int calcproduct(int x,int y);
int main()
{
	int x,y,product;
	printf("Enter the number values:\n");
	scanf("%d%d",&x,&y);
	product=calcproduct(x,y);
	printf("product=%d",product);
	return 0;
}
int calcproduct(int x,int y)
{
int product;
product=x*y;
return product;	
}