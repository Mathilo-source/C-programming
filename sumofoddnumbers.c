//sum of odd numbers between 1 and 50
//use a while loop instead
#include <stdio.h>
int main()
{
	int a = 1, sum=0;
	do
	{
		sum+=a;
		a += 2;
	}
	while(a <= 50);
	printf("%d",sum);
return 0;
}
