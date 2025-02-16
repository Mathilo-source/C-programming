#include <stdio.h>
#include <string.h>
int main()
{
	int count=1;
	char name[30];
	printf("Enter the name:");
	gets(name);
	printf("%s\n",name);
	count=strlen(name);
	printf("%d",count);
	return 0;
}