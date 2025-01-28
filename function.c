#include <stdio.h>
float calcarea(float rx);//function daclaration
float cSquare(float w);
int main()
{
float num;//declaring a variable
printf("Enter a num:");
scanf("%f",&num);
printf("area=%float",calcarea(num));//function call
printf("area=%f",cSquare( num));//function call
	return 0;
}
//function defination
float calcarea(float rx)
{
float area;
area=3.142*rx*rx;
return area;	
}
	float cSquare(float w)
{
	return w*w;
}