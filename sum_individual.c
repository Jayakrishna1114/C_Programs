#include <stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10; // for individual digit we use '%' symbol
		sum = sum+r;
		n=n/10; // for udpation of n value we use '/' symbol
	}
	printf("Sum :%d\n",sum);
	return 0;
}

