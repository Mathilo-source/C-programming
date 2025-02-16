#include <stdio.h>
int main()
{
	float r, h, v;
	printf("enter the r");
	scanf("%f",&r);
	printf("enter the height");
	scanf("%f",&h);
	v = 3.142 * r * r * h;
	printf("%f",v);
}