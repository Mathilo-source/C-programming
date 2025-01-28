#include <stdio.h>
int main()
{
	int level, maxbooks;
	printf("Enter the level 1-10:");
	scanf("%d",&level);
	maxbooks = ((level > 3) ? (5) : (3));
	printf("%d maximum number of books can be borrowed", maxbooks);
	return 0;
}
