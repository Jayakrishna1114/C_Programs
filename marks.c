#include <stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;
	float total,percentage;
	printf("Enter five subject marks:");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	total = s1+s2+s3+s4+s5;
	percentage = total / 5;
	printf("Total Marks : %.2f\n",total);
	printf("Percentage of five subjects: %.2f\n",percentage);
	return 0;
}
	
