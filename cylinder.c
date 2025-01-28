#include <stdio.h>
#define pi 3.142//declaring a constant using preprocessor command
/*a program to compute the volume of a cylinder*/
int main()
{
	const float pi2=3.142;//declaring a constant using const keyword
	float v, r, h;//declaring variables
	printf("enter the r:");
	scanf("%f", &r);//read the input of the radius
	printf("enter the h:");
	scanf("%f", &h);
	v = pi * r * r * h;//computation
	printf("the volume=%f", v);
	return 0;
}
