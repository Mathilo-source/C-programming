#include <stdio.h>
int fact(int a);
int main()
{
int a=6;
printf("Fact=%d",fact (a));
	return 0;
}
int fact(int a)
{
	int  i;
	int fact=1;
	for(i = 1; i <= a; i++)
	{
		fact=i*fact;
	}
	printf("%d",fact);	
}