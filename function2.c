#include <stdio.h>
int fact(int n);
int main()
{
	int num, y;
	printf("Enter a number:");
	scanf("%d", &num);
	y = fact(num);
	printf("Factorial=%d", y);
	return 0;
}
int fact(int n)
{
	int ans = 1;
	while (n > 1)
	{
		ans = ans * n;
	n--;	
	}
	
	return ans;
}
