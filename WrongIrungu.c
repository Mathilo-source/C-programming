#include <stdio.h>
int main()
{
	int score, att;
	printf("Enter score:");
	scanf("%d", &score);
	if(score < 39)
	{
		printf("Seats for supp");
	}
	else if(score >= 39)
		printf("Enter Att:");
	scanf("%d", &att);
	if(att < 70)
		printf("Retakes test");
	else
		printf("pass");

	return 0;
}
