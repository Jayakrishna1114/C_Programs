#include <stdio.h>
int main()
{
	int n , prod = 1,rem;
	printf("Enter n value : ");
	scanf("%d",&n);
	int num = n;
	while(n > 0)
	{
		rem = n % 10;
		prod = prod * rem ;
		n = n / 10 ;
	}
	printf("Product of %d is %d\n",num,prod);
}

