#include <stdio.h>
int main()
{
	int offer;
	printf("1.Data Deals\n");
	printf("2.Daily bundles\n");
	printf("3.Go monthly\n");
	printf("4.Okoa Data\n");
	printf("5.Hot Minute\n");
	printf("\n");
	printf("Select an offer:");
	scanf("%d", &offer);
	switch(offer)
	{
	case 1:
		printf("Data Deals Selected\n");
		break;
	case 2:
		printf("Daily Bundles Selected\n");
		break;
	case 3:
		printf("Go Monthly Selected\n");
		break;
	case 4:
		printf("Okoa Data Selected\n");
		break;
	case 5:
		printf("Hot Minutes Selected\n");
		break;
	default:
		printf("invalid choice\n");
	}
	return 0;

}
