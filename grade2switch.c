#include <stdio.h>
int main()
{
	int score;
	printf("enter score 1-5:");
	scanf("%d", &score);
	switch(score)
	{
	case 1:
		printf("Poor");
		break;
	case 2:
		printf("Below Average");
		break;
	case 3:
		printf("Average");
		break;
	case 4:
		printf("Good");
		break;
	case 5:
		printf("Excellent");
		break;
	default:
		printf("invalid");
	}
	return 0;
}
