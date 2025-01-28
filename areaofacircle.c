#include <stdio.h>
float calcarea(float rx);//function daclaration
int main()
{
float num;
printf("Enter a num:");
scanf("%f",&num);
printf("area=%float",calcarea(num));
	return 0;
}
//function defination
float calcarea(float rx)
{
float area;
area=3.142*rx*rx;
return area;	
}