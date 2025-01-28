#include <stdio.h>
int main(int argc, char** argv)
{
	int n, i;
	int f=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
