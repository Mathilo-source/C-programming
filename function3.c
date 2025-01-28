#include <stdio.h>
void sum(int x,int y);
int main()
{
int a,b;
a=12;
b=13;
sum(a,b);
printf("a=%d\n",a);
printf("b=%d\n",b);
printf("the sum of a and b=%d",a+b);	
	return 0;
}
void sum(int x,int y)
{
int total;
x=x*10;
y=y+20;
total=x+y;

printf("the sum=%d\n",x+y);	
}