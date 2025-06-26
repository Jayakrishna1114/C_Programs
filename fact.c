#include<stdio.h>
int main()
{
	int n;
	long fact = 1;
	printf("Enter n value : ");
	scanf("%d",&n);
	 int num = n;
	if(n<0)
	{
		printf("-ve number ");
	}
	else
	{
		while(n>1)
		{
			fact = fact * n;
			n--;
		}
		printf("Factorial of %d is %ld\n",num,fact);
	}
}
