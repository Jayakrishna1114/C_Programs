#include <stdio.h>
int main()
{
	int month;
	printf("Enter a number\n");
	printf("Witin the range of 1 to 12 :");
	scanf("%d",&month);
	switch(month)
	{
		case 1: case 3: case 5: case 8: case 10: case 12:
			printf("31 Days\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30 days\n");
			break;
		case 2:printf("28 or 29 days\n");

		 default: printf("Invalid Input\n");
	}
}
