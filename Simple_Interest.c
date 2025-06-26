#include <stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter Principle Amount :");
	scanf("%f",&p);
	printf("Enter Rate of Interest :");
	scanf("%f",&r);
	printf("Enter time :");
	scanf("%f",&t);
	SI = (p * r * t)/100;
	printf("Simple Interest :%f\n ",SI);
}

