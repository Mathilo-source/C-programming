#include <stdio.h>
int main()
{
	int age;//declaring a variable
	printf("enter the age:");
	scanf("%d", &age);//read the input age
	if(age < 18)
	{
		printf("not an adult");
	}
	else
	{
		printf("adult");
	}
	return 0;



}
